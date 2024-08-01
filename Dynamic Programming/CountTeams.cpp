#include<bits/stdc++.h>
using namespace std;
int numTeams(vector<int> &rating) {
    if(rating.size() < 3) return 0;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" ,"w", stdout);
#endif
vector<int> ratings = {2,5,3,4,1};
cout << numTeams(ratings);
return 0;
}