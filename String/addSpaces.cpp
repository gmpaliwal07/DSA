#include<bits/stdc++.h>
using namespace std;
 string addSpaces(string s, vector<int>& spaces) {
     string ans = "";
    int prev = 0; 

    for (int i = 0; i < spaces.size(); i++) {
        ans += s.substr(prev, spaces[i] - prev); 
        ans += " ";
        prev = spaces[i];
    }
    
    ans += s.substr(prev); 
    return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "INeedCoffee";
vector<int> space = {1,4,5};
cout << addSpaces(s, space);
return 0;
}