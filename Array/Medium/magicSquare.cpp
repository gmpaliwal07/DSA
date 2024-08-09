#include<bits/stdc++.h>
using namespace std;
bool isMagicSquare(vector<vector<int>>& grid, int row, int col) {
        string seq = "2943816729438167";
        string seqReversed = "7618349276183492";

        string border = "";
        vector<int> borderIndices = {0, 1, 2, 5, 8, 7, 6, 3};
        for (int i : borderIndices) {
            int num = grid[row + i / 3][col + (i % 3)];
            border += to_string(num);
        }

        return (grid[row][col] % 2 == 0 && grid[row + 1][col + 1] == 5 &&
                (seq.find(border) != string::npos ||
                 seqReversed.find(border) != string::npos));
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
         int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int row = 0; row + 2 < m; row++) {
            for (int col = 0; col + 2 < n; col++) {
                if (isMagicSquare(grid, row, col)) {
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
vector<vector<int>> grid =  {{4,3,8,4}, {9,5,1,9}, {2,7,6,2}};
cout << numMagicSquaresInside(grid);
return 0;
}