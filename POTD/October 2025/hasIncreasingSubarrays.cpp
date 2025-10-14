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
private:
    bool isIncreasing(vector<int> &nums, int start, int k)
    {
        for (int i = start; i < start + k - 1; ++i)
        {
            if (nums[i] >= nums[i + 1])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool hasIncreasingSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (2 * k > n)
            return false;
        for (int i = 0; i <= n - 2 * k; ++i)
        {
            if (isIncreasing(nums, i, k) && isIncreasing(nums, i + k, k))
            {
                return true;
            }
        }

        return false;
    }
}; int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    vector<int> nums = {1,2,3,4,4,4,4,5,6,7};
    int k = 5;

    Solution sol;
     sol.hasIncreasingSubarrays(nums, k) ? cout << "true" : cout << "false";
    return 0;
}