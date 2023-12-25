#include<bits/stdc++.h>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> ans  = {-1, -1};
        unordered_map<int,int> mpp; 
        for(auto i = 0 ;i < n; i++)
        {
            for(auto j = 0 ; i< n; j ++) 
            {
                mpp[grid[i][j]]++;
            }
        } 
        for (int i = 1; i <= n; ++i) {
        if (mpp[i] == 0) {
            ans[0] = i; 
        } else if (mpp[i] == 2) {
            ans[1] = i; 
        }
    }

    return ans;

}
int main(int argc, char const *argv[])
{
#ifndef Online_Judge
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
int n;
cin >> n;
   vector<vector<int>> grid(n, vector<int>(n));
   for(auto i = 0; i < n; i++) {
    for(auto j = 0; j  <n ;j ++) {
        cin >> grid[i][j];
    }
   }
vector<int> ans = findMissingAndRepeatedValues(grid);
for(auto it : ans ) {
    cout << it << " ";
}
}