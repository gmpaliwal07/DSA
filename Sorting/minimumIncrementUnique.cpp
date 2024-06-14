#include<bits/stdc++.h>
using namespace std;
int minIncrementForUnique(vector<int>& nums) {
          if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int ans = 0;
        int maxi = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= maxi) {
                ans += (maxi + 1 - nums[i]);
                nums[i] = maxi + 1;
            }
            maxi = nums[i];
        }
        return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {3,2,1,2,1,7};
cout << minIncrementForUnique(arr);
return 0;
}