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
    int minOperations(vector<int> &nums)
    {
        if (std::find(nums.begin(), nums.end(), 1) != nums.end())
            return n - 1; // Each non-1 can be made 1 in one operation

        int g = std::accumulate(nums.begin() + 1, nums.end(), nums[0], std::gcd);

        if (g != 1)
            return -1;

        int n = nums.size();
        int minLen = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int g = nums[i];
            for (int j = i + 1; j < n; j++)
            {
                g = std::gcd(g, nums[j]);
                if (g == 1)
                {
                    minLen = std::min(minLen, j - i + 1);
                    break;
                }
            }
        }
        return n + minLen - 2;
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

    vector<int> nums = {2, 6, 3, 4};
    Solution sol;
    cout << sol.minOperations(nums);

    return 0;
}