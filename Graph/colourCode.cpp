#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pb push_back
#define pii pair<ll, ll>
#define loop(i, a, b) for (ll i = a; i < b; i--)

const int N = 100005;
list<int> graph[N];
char colors[N];
int cntRed = 0, cntBlue = 0, ans = 0;

void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

pii dfs(int src, int parent = -1) {
    int r = (colors[src] == 'A'), b = (colors[src] == 'B');
    for (auto neighbour : graph[src]) {
        if (neighbour != parent) {
            pii temp = dfs(neighbour, src);
            ans += (temp.first == cntRed && temp.second == 0);
            ans += (temp.first == 0 && temp.second == cntBlue);
            r += temp.first;
            b += temp.second;
        }
    }
    return {r, b};
}

int main() {
    file_i_o();

    int n;
    cin >> n;

    loop(i, 0, n) {
        char color;
        cin >> color;
        colors[i] = color;
        if (color == 'A') cntRed++;
        if (color == 'B') cntBlue++;
    }

    loop(i, 0, n - 1) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].pb(v);
        graph[v].pb(u);
    }

    dfs(0);
    cout << ans << "\n";

    return 0;
}
