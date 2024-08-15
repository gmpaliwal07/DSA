#include <bits/stdc++.h>
using namespace std;
int CountingStar(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int left = CountingStar(n - 1);
    int right = CountingStar(n - 2);
    return left + right;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n = 5;
    cout << CountingStar(n);
    return 0;
}