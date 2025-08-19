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

long long zeroFilledSubarrays(vector<int> &nums)
{
    int n = nums.size();
    int start = -1, end = -1;
    long long sub = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            if (start == -1)
                start = i;
            end = i; // keep extending run
        }

        if ((nums[i] != 0 || i == n - 1) && start != -1)
        {
            int len = end - start + 1;
            sub += (long long)len * (len + 1) / 2;
            start = -1; // reset
        }
    }

    return sub;
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif
    vector<int> nums = {1, 3, 0, 0, 2, 0, 0, 4};
    cout << zeroFilledSubarrays(nums);
    return 0;
}