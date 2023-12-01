#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string s) {
   int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
    
}
int main(int argc, char const *argv[])
{
    string n = "aaBBa@";
    cout << is_palindrome(n);
return 0;
}