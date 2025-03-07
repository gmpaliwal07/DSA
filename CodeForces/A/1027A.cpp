#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)

void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main() {
    file_i_o();
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool isPossible = true;
        for (int i = 0; i < n / 2; i++) {
            int diff = abs(s[i] - s[n - i - 1]);
            if (diff != 0 && diff != 2) {  // Must be either the same or 2 apart
                isPossible = false;
                break;
            }
        }

        cout << (isPossible ? "YES" : "NO") << endl;
    }
    return 0;
}
