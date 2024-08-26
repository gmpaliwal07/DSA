#include<bits/stdc++.h>
using namespace std;
 int longestSubarray(vector<int>& nums) {
        int l = 0;
    int zeroCount = 0;  
    int maxLen = 0;  

    for (int r = 0; r < nums.size(); r++) { 
        if (nums[r] == 0) {
            zeroCount++;
        }

        while (zeroCount > 1) {
            if (nums[l] == 0) {
                zeroCount--;
            }
            l++;
        }

        maxLen = std::max(maxLen, r - l);
    }
    return maxLen;
 }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,1,0,1};
return 0;
}