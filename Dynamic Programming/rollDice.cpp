#include<bits/stdc++.h>
#define modulo 1000000007;
using namespace std;
int solveMem(int dice, int faces, int target, vector<vector<int>> &dp) {
        //base case 
        if(target < 0) return  0;
        if(dice == 0 && target != 0) return 0;
        if(target == 0 && dice != 0) return 0;
        if(dice == 0 && target == 0) return 1;
        if(dp[dice][target] != -1)  return dp[dice][target];
        int ans = 0;
        for(auto i = 1; i <= faces; i++) {
            ans = (ans + solveMem(dice - 1, faces, target - i, dp)) % modulo; 
        }
        return dp[dice][target] = ans;
    }

    int numRollsToTarget(int n, int k, int target) {
                 vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return solveMem(n, k, target, dp);

    }
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
int n, k , target;
cin >> n >> k >> target;
cout << numRollsToTarget(n,k,target);
return 0;
}


// uses Dynamic Programming in the recusion it shows TLE 