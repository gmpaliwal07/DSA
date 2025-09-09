#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define logarr(arr, a, b)      \
    for (ll i = a; i < b; i++) \
        cout << arr[i] << ' '; \
    cout << endl;
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
class Solution
{
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        const MOD = 1e9+7;
        vector<long long> dp(n+1, 0);
        dp[1] = 1;


        long long share = 0;
        for(auto i = 2; i <=n; i++) {
            if(i- delay >=1 ) {
                share += dp[i -delay] %MOD;
            }
            if(i - forget >=1){
                (share-= dp[i-forget] + MOD) %MOD;  
            }

            dp[i]=share;
        }

        long long ans = 0;
        for(auto i = n- forget+1; i <=n ; i++) {
            if(i >= 1)  ans += dp[i];
        }
        return ans;
    }
} int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    int n, delay, forgot;
    cin >> n >> delay >> forgot;

    Solution sol;
    cout << sol.peopleAwareOfSecret(n, delay, forgot);
    return 0;
}