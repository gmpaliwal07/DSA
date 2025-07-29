#include<bits/stdc++.h>
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
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;
void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
    vector<int> nums = {1, 2};
    vector<int> ans;
    
    // Precompute prefix OR array
    int n = nums.size();
    vector<int> prefix_OR(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix_OR[i + 1] = prefix_OR[i] | nums[i];
    }
    
    // Precompute local_max_OR for each starting index
    vector<int> local_max_OR(n);
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            local_max_OR[i] = nums[i];
        } else {
            local_max_OR[i] = nums[i] | local_max_OR[i + 1];
        }
    }
    
    for(int i = 0; i < n; i++) {
        int left = 1, right = n - i;
        int min_len = right;
        while (left <= right) {
            int len = left + (right - left) / 2;
            // Compute OR of nums[i:i+len-1] using prefix OR
            int mx = (i + len <= n) ? (prefix_OR[i + len] ^ (i > 0 ? prefix_OR[i] : 0)) : 0;
            // If prefix_OR doesn't work directly for OR, compute manually for verification
            if (i + len <= n) {
                mx = 0;
                for (int j = i; j < i + len; j++) {
                    mx |= nums[j];
                }
            }
            if (mx == local_max_OR[i]) {
                min_len = min(min_len, len);
                right = len - 1; // Try shorter length
            } else {
                left = len + 1; // Need longer length
            }
        }
        ans.push_back(min_len);
    }
    
    cout << endl;
    for(auto it : ans) {
        cout << it << " ";
    }
    
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\nTime: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif
    return 0;
}