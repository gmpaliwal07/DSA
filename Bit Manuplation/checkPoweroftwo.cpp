#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n = 16;
    cout << (((n & (n-1)) == 0) ? "true" : "false");  

    return 0;
}
