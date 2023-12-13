#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string &st1, string &st2) {
    if(st1.length() != st2.length()) return false;
    unordered_map<char,char> mpp;
    // for(auto i = 0; i < st1.length(); i++) {
    //     mpp[st1[i]] = st2[i];
    // }
    // for(auto i = 0; i  < st1.length(); i++) {
    //     char char1 = st1[i];
    //     char char2  = st2[i];
    //     if(mpp.at(char1) != char2) {
    //         return false;        
    //         }
    // }
    // return true;    
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout);
#endif
string st1, st2;
cin >> st1 >> st2;
int ans = isomorphic(st1, st2);
ans == 1 ? cout <<  "true" : cout <<  "false";
return 0;
}


// true  => 1
// false => 0;
// map 
// compare mpp elemnt 