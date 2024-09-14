#include<bits/stdc++.h>
using namespace std;
bool ValidPara(string s) {
   int max = 0;
   int min = 0;
    for(auto i = 0; i < s.size(); i++) {
         if(s[i] == '(') {
              max++;
              min++;
         }
         else if(s[i] == ')') {
              max--;
              min = std::max(min-1, 0);
         }
         else {
              max++;
              min = std::max(min-1, 0);
         }
         if(max < 0) return false;
    }
    return min == 0;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout );
#endif
string s = "(*)";
cout << ValidPara(s) ? "True" : "False";
return 0;
}