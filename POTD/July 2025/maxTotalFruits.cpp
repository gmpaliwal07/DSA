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

int maxTotalFruits(vector<vector<int>> &fruits, int startPos, int k)
{
    vector<int> pt(fruits.size()), prefix(fruits.size() + 1, 0);

    int n = fruits.size();
    for (auto i = 0; i < n; i++)
    {
        pt[i] = fruits[i][0];
        prefix[i + 1] = prefix[i] + fruits[i][1];
    }

    auto fruitInRange = [&](int left, int right) -> int
    {
        int l = 0, r = n - 1, start = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pt[mid] >= left)
            {
                start = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        l = 0, r = n - 1;
        int end = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (pt[mid] <= right)
            {
                end = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (start > end)
            return 0;
        return prefix[end + 1] - prefix[start];
    };
    int maxFruits = 0;

    for (int x = 0; x <= k; x++)
    {
        int left = startPos - x;
        int right = startPos + max(0, k - 2 * x);
        maxFruits = max(maxFruits, fruitInRange(left, right));

        left = startPos - max(0, k - 2 * x);
        right = startPos + x;
        maxFruits = max(maxFruits, fruitInRange(left, right));
    }

    return maxFruits;
}
int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    vector<vector<int>> fruits = {{2, 8}, {6, 3}, {8, 6}};
    int startPos = 5, k = 4;
    cout << maxTotalFruits(fruits, startPos, k);

    return 0;
}