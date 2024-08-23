#include<bits/stdc++.h>
using namespace std;
string gcdOfStrings(string str1, string str2) {
     if (str1 + str2 != str2 + str1) {
        return "";
    }
    int gcdLength = gcd(str1.size(), str2.size());
    return str1.substr(0, gcdLength);
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
string str1 = "ABCABC";
string st2 = "ABC";
cout << gcdOfStrings(str1,st2);
return 0;
}