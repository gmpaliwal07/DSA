#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n) {
    int start = 1;
    int end = n;
    while (start <= end)
    {
        long long mid = (start+end)/2;
        long long val = mid*mid;
        if(val <= n)  start = mid +1;
        else end = mid -1;
    }
     return end;
}
int main(int argc, char const   *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout);
#endif
int n;
cin >> n;
cout << squareRoot(n);
return 0;
}