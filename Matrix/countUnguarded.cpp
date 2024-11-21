#include<bits/stdc++.h>
using namespace std;
  int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
      vector<vector<int> > grid(m, vector<char>(n,0));
      for(auto it : guards) {
        grid[guards[0]][guards[1]] = 'G';
        
      }
      for(auto it : guards) {
        grid[walls[0]][walls[1]] = 'W';
        
      }
        auto markGuarded = [&](int x, int y, int dx, int dy) {
            while (x >= 0 && x < m && y >= 0 && y < n) {
                // Stop if we hit a wall or another guard
                if (grid[x][y] == 'W' || grid[x][y] == 'G') break;
                // Mark cell as guarded if it's empty
                if (grid[x][y] == 0) grid[x][y] = 'X';
                x += dx;
                y += dy;
            }
        };
         for (auto& guard : guards) {
            int x = guard[0], y = guard[1];
            markGuarded(x - 1, y, -1, 0); // Up
            markGuarded(x + 1, y, 1, 0);  // Down
            markGuarded(x, y - 1, 0, -1); // Left
            markGuarded(x, y + 1, 0, 1);  // Right
        }
 int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    ans++;
                }
            }
        }
        return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int> > guard = {{0,0},{1,1},{2,3}};
vector<vector<int> > walls = {{0,1},{2,2},{1,4}};

return 0;
}