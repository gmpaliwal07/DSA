#include<bits/stdc++.h>
using namespace std;
void spiralPrint(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
      for(auto it = 0; it < row; it++){
        for(auto j = 0; j < row; j++){
            cout << matrix[it][j] << " ";
        }
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int>> matrix={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
spiralPrint(matrix);
return 0;
}