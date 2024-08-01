#include<bits/stdc++.h>
using namespace std;
int countSeniors(vector<string>& details) {
  
  int ans = 0;
    for(auto it : details) {
        int age = (it[it.length() - 4] - '0') * 10 + (it[it.length() - 3] - '0');
        if(age > 60) {
            ans++;
        }
    }
    return ans;
   }
    
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<string> details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
cout << countSeniors(details);

return 0;
}