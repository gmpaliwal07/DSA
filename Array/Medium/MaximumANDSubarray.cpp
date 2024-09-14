#include<bits/stdc++.h>
using namespace std;
int MaxANDSubarray(vector<int> &nums) {
    int n = nums.size();
    int ans = 0;
    for(int i = 0; i < 30; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] & (1 << i)) {
                count++;
            }
        }
        if(count >= 2) {
            ans |= (1 << i);
        }
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> nums = {1, 2, 3, 4};

return 0;
}