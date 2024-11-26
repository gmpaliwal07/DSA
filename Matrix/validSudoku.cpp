#include<bits/stdc++.h>
using namespace std;

    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), grids(9);

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char ele = board[i][j];
                if (ele == '.') continue;

                int gridIndex = (i / 3) * 3 + (j / 3); // Calculate 3x3 grid index

                // Check for duplicates in the row, column, or sub-grid
                if (rows[i].count(ele) || cols[j].count(ele) || grids[gridIndex].count(ele))
                    return false;

                // Insert the element into the respective row, column, and sub-grid sets
                rows[i].insert(ele);
                cols[j].insert(ele);
                grids[gridIndex].insert(ele);
            }
        }
        return true;
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<char>> board(9, vector<char>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
        }
    }
return 0;
}