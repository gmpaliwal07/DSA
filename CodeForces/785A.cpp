#include <bits/stdc++.h>
using namespace std;

#define ump unordered_map
#define vi vector<string>
#define loop(i, a, b) for (int i = a; i < b; i++)

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

int main()
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "ms\n";
#endif

    int n;
    cin >> n;

    vi shapes(n);
    loop(i, 0, n) {
        cin >> shapes[i];
    }

    ump<string, int> m = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int ans = 0;
    for (auto &it : shapes) {
        ans += m[it];
    }

    cout << ans << endl;
    return 0;
}
