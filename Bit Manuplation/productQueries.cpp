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

int set_bitCount(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

vector<int> productQueries(int n, vector<vector<int>> &queries)
{
    //  get set bits for making a array;
    int count = set_bitCount(n);
    vector<int> ele;
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            ele.push_back(1 << i);
        }
    }

    vector<int> ans;
    for (auto it : queries)
    {
        int left = it[0];
        int right = it[1];

        long long product = 1;
        const int MOD = 1e9 + 7;

        for (int i = left; i <= right; i++)
        {
            product = (product * ele[i]) % MOD;
        }

        ans.push_back(product);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif
int n = 15;
vector<vector<int>> queries = {{0,1},{2,2},{0,3}};

vector<int> ans = productQueries(n, queries);
for(auto it: ans) {
    cout << it << " ";
}
    return 0;
}