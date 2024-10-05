#include<bits/stdc++.h>
using namespace std;
bool checkInclusion(string &s1, string &s2) {
    string test = s1+s1;
    if(s2.find(test) != string::npos){
        return false;
    }
    return true;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s1 = "ab";
string s2 = "eidbaooo";
return 0;
}