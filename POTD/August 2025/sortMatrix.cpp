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
vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();

    // Bottom-left diagonals (including main diagonal)
    for (int r = 0; r < n; r++)
    {
        vector<int> temp;
        int i = r, j = 0;
        while (i < n && j < n)
        {
            temp.push_back(grid[i][j]);
            i++;
            j++;
        }
        sort(temp.rbegin(), temp.rend()); // descending order

        i = r, j = 0;
        for (int val : temp)
        {
            grid[i][j] = val;
            i++;
            j++;
        }
    }
    for (int c = 1; c < n; c++)
    {
        vector<int> temp;
        int i = 0, j = c;
        while (i < n && j < n)
        {
            temp.push_back(grid[i][j]);
            i++;
            j++;
        }
        sort(temp.begin(), temp.end()); // ascending order

        i = 0, j = c;
        for (int val : temp)
        {
            grid[i][j] = val;
            i++;
            j++;
        }
    }

    return grid;
}
int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    vector<vector<int>> mat = {{1, 7, 3}, {9, 8, 2}, {4, 5, 6}};
    vector<vector<int>> ans = sortMatrix(mat);

    for(auto i = 0 ;i < ans.size(); i++) {
        for(auto j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}