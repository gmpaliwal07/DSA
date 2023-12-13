#include<bits/stdc++.h>
using namespace std;
string reverse(string str) {
    string ans;
    int s = 0;
    int e = str.length()-1;
    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
    ans = str;
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" , "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s;
cin >> s;
cout << reverse(s);
return 0;
}