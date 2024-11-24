#include<bits/stdc++.h>
using namespace std;
int maxEqualRowsAfterFlips(vector<vector<int>> &matrix) {
     int col = matrix[0].size();
        int Rows = 0;

        for (auto& it : matrix) {
            vector<int> flippedRow(col);
            int identicalRowCount = 0;

            // Create flipped version of current row (0->1, 1->0)
            for (int i= 0; i < col; i++) {
                flippedRow[i] = 1 - it[i];
            }

            // Check every row against current row and its flipped version
            for (auto& compareRow : matrix) {
                // If row matches either original or flipped pattern, increment
                // counter
                if (compareRow == it || compareRow == flippedRow) {
                    identicalRowCount++;
                }
            }

            Rows = max(Rows, identicalRowCount);
        }

        return Rows;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int>> matrix = { {0,1},{1,1}};
cout << maxEqualRowsAfterFlips(matrix);
return 0;
}