#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld  long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
void file_i_o()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}




int numberOfWays(int n, int x) {
    const int MOD = 1e+7;
    vector<int> dp(n + 1, 0);
    dp[0] = 1; 

    for (int i = 1; ; i++) {
        long long p = 1;
        for (int j = 0; j < x; j++) p *= i;  // compute i^x
        if (p > n) break;

        // process in reverse to ensure unique usage of each power
        for (int t = n; t >= p; t--) {
            dp[t] = (dp[t] + dp[t - p]) % MOD;
        }
    }

    return dp[n];
}
int main(int argc, char const *argv[])
{
clock_t begin = clock();
file_i_o();
#ifndef ONLINE_JUDGE
clock_t end = clock();
cout<<"Time: "<<(double)(end-begin)/CLOCKS_PER_SEC*1000<<"s\n";
#endif
int n = 4, x= 1;
// Input: n = 10, x = 2
// Output: 1
// Explanation: We can express n as the following: n = 3^2 + 1^2 = 10.
// It can be shown that it is the only way to express 10 as the sum of the 2nd power of unique integers.
cout << numberOfWays(n,x);
return 0;
}