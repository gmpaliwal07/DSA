#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string S) {
    if (S.length() <= 1) {
        return 1;
    } else if (S[0] != S[S.length()-1]) {
        return 0;
    } else {
        return isPalindrome(S.substr(1, S.length()-2));
    }

}
int main(int argc, char const *argv[])
{
string s = "Acojd";
cout << isPalindrome(s);
return 0;
}