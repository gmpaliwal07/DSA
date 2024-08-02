#include<bits/stdc++.h>
using namespace std;
   int minSwaps(vector<int>& nums) {
        int minSwaps = INT_MAX;

        int totalOnes = accumulate(nums.begin(), nums.end(), 0);

        int onesCount = nums[0];
        int end = 0;


        for (int i = 0; i < nums.size(); ++i) {
        
            // the window
            if (i != 0) {
                onesCount -= nums[i - 1];
            }

            while (end - i + 1 < totalOnes) {
                end++;
                onesCount += nums[end % nums.size()];
            }
            minSwaps = min(minSwaps, totalOnes - onesCount);
        }

        return minSwaps;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {0,1,0,1,1,0,0};
cout << minSwaps(arr);
return 0;
}