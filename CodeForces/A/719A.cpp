#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    int a, b;
    cin >> a >> b;

    int cnt = 0;

   
    while (a <= b) {
        a *= 3; // Triple `a`
        b *= 2; // Double `b`
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
