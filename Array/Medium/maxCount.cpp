#include<bits/stdc++.h>
using namespace std;
int maxCount(vector<int>& banned, int n, int maxSum) {
    set<int> sett(banned.begin(), banned.end()); 
        int cnt = 0;
        int sum = 0; 

        for (int i = 1; i <= n; i++) { 
            // Check if i is NOT in the set and adding it stays within maxSum
            if (sett.find(i) == sett.end() && sum + i <= maxSum) {
                sum += i; 
                cnt++;   
            }
        }

        return cnt;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> banned = {11};
int maxSum = 50;
int n = 7;
cout << maxCount(banned,n, maxSum);
return 0;
}