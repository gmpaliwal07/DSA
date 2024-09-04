#include<bits/stdc++.h>
using namespace std;
double myPow(int x, int n) {
    if (n == 0) return 1;
    if (n < 0) {
        if (x == 1) return 1;
        if (x == -1) return n % 2 == 0 ? 1 : -1;
        return 0; 
    }

    int half = myPow(x, n / 2);
    if (n % 2 == 0) {
        return half * half;
    } else {
        return half * half * x;
    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int X = 2, n = 10;
cout << myPow(X,n);
return 0;
}