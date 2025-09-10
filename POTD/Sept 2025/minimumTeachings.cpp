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
    bool sharesLanguage(const vector<int> &user1, const vector<int> &user2)
    {
        unordered_set<int> s(user1.begin(), user1.end());
        for (int lang : user2)
        {
            if (s.count(lang))
                return true;
        }
        return false;
    }

public:
    int minimumTeachings(int n, vector<vector<int>> &languages, vector<vector<int>> &friendships)
    {
        set<int> st; 

        for (auto &it : friendships)
        {
            int u = it[0], v = it[1];
            if (!sharesLanguage(languages[u - 1], languages[v - 1]))
            {
                st.insert(u - 1);
                st.insert(v - 1);
            }
        }

        int ans = languages.size();
        for (int lang = 1; lang <= n; lang++)
        {
            int tolearn = 0;
            for (int user : st)
            {
                bool knows = false;
                for (int l : languages[user])
                {
                    if (l == lang)
                    {
                        knows = true;
                        break;
                    }
                }
                if (!knows)
                    tolearn++;
            }
            ans = min(ans, tolearn);
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

    return 0;
}