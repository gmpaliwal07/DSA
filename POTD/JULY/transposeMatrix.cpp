#include<bits/stdc++.h>
using namespace std;
void transposeMatrix(vector<vector<int>> &matrix, int n){
    for(auto i = 0; i < n; i++) {
        for (auto j = i+1; j < n; j++)
        {
           swap(matrix[i][j], matrix[j][i]);
        }
    }

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout); 
#endif

int n;
cin >> n;
vector<vector<int>> matrix(n, vector<int>(n));
for(int i = 0; i < n; i++) {
    for (auto j = 0; j < n; j++)
    {
        cin >> matrix[i][j];
    }
    

transposeMatrix(matrix,n);
for(int i = 0; i < n; i++) {
    for (auto j = 0; j < n; j++)
    {
        cout << matrix[i][j];
    }
}
return 0;
}
}