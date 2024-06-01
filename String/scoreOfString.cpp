#include<bits/stdc++.h>
using namespace std;
int scoreOfString(string &str) {
    int j = 0 , sum = 0;
    for(auto i = 1; i < str.length(); i++) {
        int dig = abs(str[j]-str[i]);
        sum+=dig;
        j++;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string str = "zaz";
int ans = str[0];
cout << ans << endl;
cout << scoreOfString(str);
return 0;
}