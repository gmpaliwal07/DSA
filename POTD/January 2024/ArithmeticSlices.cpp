#include<bits/stdc++.h>
using namespace std;
 int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
    int total_count = 0;
    vector<unordered_map<long long, int>> dp(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            long long diff = static_cast<long long>(nums[i]) - nums[j];
            int count_j_diff = dp[j].count(diff) ? dp[j][diff] : 0;
            total_count += count_j_diff;
            dp[i][diff] += count_j_diff + 1;
        }
    }

    return total_count;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdout);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int n;
cin >> n;
for(auto i = 0; i<n; i++) {
    int a;
    cin >>a;
    arr.push_back(a);
}
cout << numberOfArithmeticSlices(arr);
return 0;
}