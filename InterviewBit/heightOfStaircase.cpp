#include<bits/stdc++.h>
using namespace std;
int solve(int a) {
    int ans = 0;
    for(auto i = 1; i < a; i++) {
        ans++;
        A = A-i;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", 'w' ,stdout);
#endif
int a = 10;
cout << solve(a);
return 0;
}