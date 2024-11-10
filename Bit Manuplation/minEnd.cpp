#include<bits/stdc++.h>
using namespace std;
long long minEnd(int x, int n) {
        long long result = x;

        while (--n) {
            result = (result + 1) | x;
        }

        return result;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n = 2, x = 7;

cout << minEnd(x,n);
return 0;
}