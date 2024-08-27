#include<bits/stdc++.h>
using namespace std;
 int equalPairs(vector<vector<int>>& grid) {
     int n = grid.size();
    int count = 0;
    map<vector<int>, int> rowMap;

    // Store each row in a map with its frequency
    for (int i = 0; i < n; ++i) {
        vector<int> row = grid[i];
        rowMap[row]++;
    }

    // Check each column against the map of rows
    for (int j = 0; j < n; ++j) {
        vector<int> col;
        for (int i = 0; i < n; ++i) {
            col.push_back(grid[i][j]);
        }
        // If the column vector exists in the map, add its frequency to the count
        if (rowMap.find(col) != rowMap.end()) {
            count += rowMap[col];
        }
    }

    return count;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
vector<vector<int>> arr = {{3,2,1},{1,7,6},{2,7,7}};

return 0;
}