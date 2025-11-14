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
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
    {
        vector<vector<int>> mat(n, vector<int>(n, 0)); // create an n x n matrix filled with 0

        int idx = 0;
        while (idx < queries.size())
        {
            auto qrs = queries[idx]; // qrs = {r1, c1, r2, c2}
            int r1 = qrs[0];
            int c1 = qrs[1];
            int r2 = qrs[2];
            int c2 = qrs[3];

            for (int i = r1; i <= r2; i++)
            {
                for (int j = c1; j <= c2; j++)
                {
                    mat[i][j] += 1;
                }
            }

            idx++;
        }
        return mat;
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
    int n = 2;
    vector<vector<int>> qrs = {{0,0,1,1}};

    Solution sol;
    vector<vector<int>> mat = sol.rangeAddQueries(n, qrs);
    for (auto i = 0; i < mat.size(); i++)
    {
        for (auto j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}