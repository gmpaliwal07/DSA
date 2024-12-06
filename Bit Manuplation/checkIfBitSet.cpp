#include <bits/stdc++.h>
using namespace std;

bool CheckForSet(int n, int k)
{
    return (n & (1 << k)) != 0 ? true : false;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n = 10, i = 1;

    cout << (CheckForSet(n, i) ? "true" : "false") << endl;

    return 0;
}
