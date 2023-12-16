#include<bits/stdc++.h>
using namespace std;
bool ValidAnargam(string s, string t) {
   unordered_map<char, int > mpp;
   // add frequency increament
   for(char c : s) {
    mpp[c]++;
   }
   // decreament
   for(char c : t) {
    mpp[c]--;
   }

   for(auto &p : mpp) {
    if(p.second != 0) {
        return false;
    }
   }
return true;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" , "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s, t;
cin >> s >> t;
int ans = ValidAnargam(s,t);
(ans== 1) ? cout << "true" : cout << "false";
return 0;
}