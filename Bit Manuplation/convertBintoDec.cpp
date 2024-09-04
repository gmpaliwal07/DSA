#include<bits/stdc++.h>
using namespace std;
string convertTobinary(int n) {
    if (n == 0) return "0";  
    
    string res = "";
    while (n > 0) {
        if (n % 2 == 1) res += '1';
        else res += '0';
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n = 5;
cout << convertTobinary(n);

return 0;
}