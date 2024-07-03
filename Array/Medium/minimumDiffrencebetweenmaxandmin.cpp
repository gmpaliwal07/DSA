#include<bits/stdc++.h>
using namespace std;
   int minDifference(vector<int>& nums) {
       if (nums.size() <= 4) return 0; 

    sort(nums.begin(), nums.end());

    int n = nums.size();
    int min_diff = INT_MAX;

    for (int i = 0; i <= 3; ++i) {
        min_diff = min(min_diff, nums[n - 4 + i] - nums[i]);
    }
    
    return min_diff;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {5,3,2,4};
cout << minDifference(arr);
return 0;
}