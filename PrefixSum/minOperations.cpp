#include<bits/stdc++.h>
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
#define logarr(arr, a, b) for (ll i = a; i < b; i++) cout << arr[i] << ' '; cout << endl;
#define printvec(vec) for (auto &val : vec) cout << val << " "; cout << endl;
#define all(x) x.begin(), x.end()

void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vi minOperations(string boxes) {
    ll n = boxes.size();
    vi ans(n, 0);
    ll Left = 0, moveLeft = 0;
    ll Right = 0, moveRight = 0;

    loop(i, 0, n) {
        ans[i] += moveLeft;
        Left += boxes[i] - '0';
        moveLeft += Left;

        ll j = n - 1 - i;
        ans[j] += moveRight;
        Right += boxes[j] - '0';
        moveRight += Right;
    }

    return ans;
}

int main(int argc, char const *argv[]) {
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms\n";
#endif

    string s = "110";
    vi result = minOperations(s);
    printvec(result);

    return 0;
}
