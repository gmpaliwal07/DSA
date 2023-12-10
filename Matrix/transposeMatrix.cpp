#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> result(cols, vector<int>(rows, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

void displayMatrix(const vector<vector<int>> &matrix) {
    for (const auto &row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt" ,"w", stdout);
    #endif
    vector<vector<int>> originalMatrix;

    vector<vector<int>> transposedMatrix = transpose(originalMatrix);
  
    displayMatrix(transposedMatrix);

    return 0;

}