#include<bits/stdc++.h>
using namespace std;
int lengthOfLIS(vector<int> & nums) {
    int n = nums.size();
    vector<int> dp(n,1);
    for(auto i= 1; i<n; i++) {
        for(auto j =0; j < i; j++){
            if(nums[i]> nums[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }

        }
    }
    return *max_element(dp.begin(), dp.end());
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
vector<int> nums;
int n;
cin >> n;
for(auto  i = 0; i < n; i++) {
    int a;
    cin >> a;
    nums.push_back(a);
}
cout << lengthOfLIS(nums);
return 0;
}