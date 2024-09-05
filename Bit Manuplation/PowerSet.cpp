#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> PowerSet(vector<int> &arr) {
    int n = arr.size();
    int PowerSize = 1<<n; // 2^n
    vector<vector<int>> res;
    for(auto i = 0; i< PowerSize; i++ ){
        vector<int> subset;
        for(auto j =0; j <n; j++) {
            if(i & (1<<j)) {
                subset.push_back(arr[j]);
            }
        }
        res.push_back(subset);
    }
return res;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> nums = {1,2,3};
vector<vector<int>> result = PowerSet(nums);
  cout << "Power set: \n";
    for (auto subset : result) {
        cout << "{ ";
        for (int x : subset) {
            cout << x << " ";
        }
        cout << "}\n";
    }
    
    return 0;
}