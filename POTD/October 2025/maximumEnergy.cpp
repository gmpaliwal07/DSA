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
public:
    int maximumEnergy(vector<int> &energy, int k)
    {
        int n = energy.size();
        vector<int> dp(n, 0);

        int ans = INT_MIN;
        dp[0] = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            dp[i] = energy[i] + ((i + k < n) ? dp[i + k] : 0);

            ans = max(ans, dp[i]);
        }
        return ans;
    }

};
int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    vector<int> energy = {5, 2, -10, -5, 1};
    int k = 3;
    Solution sol;
    cout << sol.maximumEnergy(energy, k);
    return 0;
}