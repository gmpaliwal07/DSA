#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)
#define logarr(arr, a, b) for (ll i = a; i < b; i++) cout << arr[i] << ' '; cout << endl;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define read_input freopen("input.txt", "r", stdin);
#define write_output freopen("output.txt", "w", stdout);

void file_i_o() {
    fast_io();
    #ifndef ONLINE_JUDGE
    read_input;
    write_output;
    #endif
}

string findDifferentBinaryString(vs &nums) {
    string ans = "";
    loop(i, 0, nums.size()) {
        ans += (nums[i][i] == '0') ? '1' : '0';
    }
    return ans;
}

int main() {
    clock_t begin = clock();
    file_i_o();
    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
    #endif
    
    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vs nums(n);
        loop(i, 0, n) cin >> nums[i];
        cout << findDifferentBinaryString(nums) << endl;
    }
    
    return 0;
}