#include<bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s){

   sort(g.begin(), g.end());
   sort(s.begin(),s.end());
   int i =0, j= 0;
   while(i <= g.size() && j <= s.size()) {
    if(s[j]  >= s[i]) {
        j++;
    }
    i++;
   }
   return j;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> greed = {1,2,3};
vector<int> child = {1,1};
cout <<findContentChildren(greed, child);

return 0;
}