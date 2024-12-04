#include<bits/stdc++.h>
using namespace std;
bool canMakeSubsequence(string s1, string s2){
    int i = 0;
    int j = 0;
    while(i < s1.size() && j < s2.size()) {
        if(s1[i] == s2[j]) {
            j++;
        }
        i++;
    }
     return j == s2.size();
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string str1 = "abc";
string str2 = "ad";
cout << (canMakeSubsequence(str1, str2) ? "true" : "false");
return 0;
}