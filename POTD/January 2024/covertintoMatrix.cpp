#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> findMatrix(vector<int> &arr) {
    vector<vector<int>> ans;
    unordered_map<int,int> mp;
    for(auto it : arr) {
        mp[it]++;
        if(ans.size() < mp[it]) {
            ans.push_back({});
        }
        ans[mp[it]-1].push_back(it);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w" ,stdout);
#endif
int n;
cin >> n;
vector<int> arr;
for(auto i= 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
}
vector<vector<int>> ans = findMatrix(arr);
   for ( auto& row : ans) {
        for (auto element : row) {
            cout << element << " ";
        }
        cout << std::endl;
    }
return 0;
}