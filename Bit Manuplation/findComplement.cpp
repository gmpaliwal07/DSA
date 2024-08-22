#include<bits/stdc++.h>
using namespace std;
int findComplement(int n) {
    int ans =0;
    int i = 0;
    while(n) {
        if((n & 1) == 0) {
            ans += (1 << i);
        }
        i++;
        n >>= 1;
    }
    return ans;}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDEGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
int n;
cin >> n;

return 0;
}