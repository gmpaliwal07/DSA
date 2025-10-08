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
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        vector<int> ans;
        sort(potions.begin(), potions.end()); 
        int n = potions.size();

        for (int spell : spells)
        {
            int low = 0, high = n - 1;
            int idx = n; 
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if ((long long)spell * potions[mid] >= success)
                {
                    idx = mid;    
                    high = mid - 1; 
                }
                else
                {
                    low = mid + 1; 
                }
            }
            ans.push_back(n - idx);
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
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "ms\n";
#endif

    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    int success = 7;

    Solution sol;
    vector<int> ans = sol.successfulPairs(spells, potions, success);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
