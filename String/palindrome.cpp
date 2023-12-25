#include<bits/stdc++.h>
using namespace std;
// string isLower(string s) {
//     if(s >= 'a' && s <= 'z') return s;
//     else {
//         char temp = s - 'A'+ 'a';
//         return temp;
//     }
// }
// based on ASCII
// bool palindrome(string s) {
//   int n  =s.length();
//   int start = 0;
//   int end = n-1;
//   while (start < end)
//   {
//     while(start < end && !isalnum(s[start])) start++;
//     while(start < end && !isalnum(s[end])) end--;
     
//     if(tolower(s[start]) != tolower( s[end])) return false;
//     start++;
//     end --;
//   }
//   return true;
// }

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
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" , "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s;
cin >> s;
int ans = palindrome(s);
(ans == 1) ? cout << "true" : cout << "false";
return 0;
}



