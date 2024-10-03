#include<bits/stdc++.h>
using namespace std;
int minSubarray(vector<int> &nums, int &p) {
   long long totalSum = accumulate(nums.begin(), nums.end(),0LL);
    int mod = totalSum % p;
    
    if (mod == 0) return 0;  
    
    unordered_map<int, int> prefixMod;  
    prefixMod[0] = -1;  
    int n = nums.size();
    long long prefixSum = 0;
    int minLength = n;
    
    for (int i = 0; i < n; i++) {
        prefixSum += nums[i];
        int currentMod = prefixSum % p;
        int targetMod = (currentMod - mod + p) % p;  
        if (prefixMod.find(targetMod) != prefixMod.end()) {
            minLength = min(minLength, i - prefixMod[targetMod]);
        }
        
        prefixMod[currentMod] = i;
    }
    
    return minLength == n ? -1 : minLength;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {3,1,4,2};
int p = 5;
cout << minSubarray(arr,p);
return 0;
}