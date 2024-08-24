#include<bits/stdc++.h>
using namespace std;
string Reverse(string s) {
  string rev ;
  int start =0;
  int end = s.length()-1;
  while (start < end)
  {
    swap(s[start++], s[end--]);
  }
  rev = s;
return rev;
}
bool palindrome(string s) {
  string str = Reverse(s);
  if(s != str) return false;
  else return true;
}
string nearestPalindromic(string n) {
    if(palindrome(n)) return n;

    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
string =  "123";

return 0;
}