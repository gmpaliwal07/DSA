#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> Convert(vector<int> &arr, int m, int n){
    if (original.size() != m * n) {
        return {};  // Return an empty 2D vector if sizes don't match
    }
    vector<vector<int>> res(m, vector<int>(n, 0));
    int k = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = arr[k++];
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int m = 2, n= 2;

return 0;
}