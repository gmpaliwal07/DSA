#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld  long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;

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

class Solution {
public:
    // returns:
    // 1 -> x is closer to z
    // 2 -> y is closer to z
    // 0 -> tie
    int findClosest(int x, int y, int z) {
        int dist1 = abs(x - z);
        int dist2 = abs(y - z);

        if (dist1 < dist2) {
            return 1;
        } else if (dist1 == dist2) {
            return 0;
        } else {
            return 2;
        }
    }
};

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();

    int t;
    cin >> t;  

    Solution sol;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << sol.findClosest(x, y, z) << "\n";
    }

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms\n";
#endif

    return 0;
}
