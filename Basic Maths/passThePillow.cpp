#include<bits/stdc++.h>
using namespace std;
int passThePillow(int n, int time) {
    int ans = 0;
    for(auto i = 2; i< time; i++) {
        ans++;
        n--;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n = 4;
int time = 5;
cout << passThePillow(n, time);
return 0;
}