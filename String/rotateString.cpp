#include<bits/stdc++.h>
using namespace std;
bool rotateString(string &A, string &B) {
    return (A.length() == B.length() && (A+A).find(B) != string::npos);
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w" ,stdout);
#endif
string A = "abcde";
string B = "cdeab";
(rotateString(A,B) == 1)  ? cout << "true" : cout << "false";
return 0;
}   