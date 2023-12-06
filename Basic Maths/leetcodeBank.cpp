#include<bits/stdc++.h>
using namespace std;
int totalMoney(int n) {
    int ans = 0;
    int monday = 1;
    while (n >0)
    {
        for(auto i = 0; i < min(n,7); i++) {
            ans+=monday + i;

        }
        n-=7;
        monday++;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" ,"w", stdout);
#endif
int n;
cin >> n;
cout << totalMoney(n);
return 0;
}