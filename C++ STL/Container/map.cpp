#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
map<int,int> mp;   // <key,value>
map<int, pair<int,int> > m;
map <pair<int,int> , int> mpp;
mp[1]= 2;
mp.insert({3,1});
mpp[{2,3}] = 10;
for (auto it : mp)
{
    cout << it.first << "-" << it.second;
     cout << endl;
}
cout << mp[1];
cout << mp[2];
auto it  = mp.find(2);
// also works lower and upper bound 
return 0;
}