#include<bits/stdc++.h>
using namespace std;
bool JumpGame(vector<int> &arr) {

      int maxReach = 0;  
        int n = nums.size(); 
        
        for (int i = 0; i < n; i++) {
            if (i > maxReach) {
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);

            if (maxReach >= n - 1) {
                return true;
            }
        }

        return false;
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {2,3,1,1,4};
cout << canJump(arr);
return 0;
}