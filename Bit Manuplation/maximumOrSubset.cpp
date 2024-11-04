#include<bits/stdc++.h>
using namespace std;
    int countMaxOrSubsets(vector<int>& nums) {
            int maxOr = 0;
            int n = nums.size();
            
            // Step 1: MAX bITwise OR
            for (int num : nums) {
                maxOr |= num;
            }

            int count = 0;

            // Step 2: Count subsets that produce the maximum OR
            int totalSubsets = pow(2, n);

            for (int i = 1; i < totalSubsets; i++) { // start from 1 to avoid the empty subset
                int currentOr = 0;

                for (int j = 0; j < n; j++) {
                    // Check if jth bit is set in i
                    if (i & (1 << j)) {
                        currentOr |= nums[j];
                    }
                }

                if (currentOr == maxOr) {
                    count++;
                }
            }

            return count;
 
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_J
return 0;
}