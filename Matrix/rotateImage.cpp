#include<bits/stdc++.h>
using namespace std;
void rotateImage(vector<vector<int>> &matrix) {
        int n = matrix.size();
    for(auto i = 0; i < n; i++ ){
        for(auto j = i+1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(auto &it : matrix){

    reverse(it.begin(), it.end());
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
rotateImage(matrix);
for(auto it :matrix) {
    for(auto ele : it){
        cout << ele << " " ;
    }
    cout << endl;
}
return 0;
}