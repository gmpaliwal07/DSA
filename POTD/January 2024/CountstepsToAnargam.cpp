#include<bits/stdc++.h>
using namespace std;
int CheckAnargam(string &s, string &t){
    int res = 0;
    unordered_map<char,int> freq;
    for(auto it = 0; it < s.size(); it++) {
        freq[s[it]]++;
        freq[t[it]]--;
    }

    for(auto curr : freq){
        res+=abs(curr.second);  //over here we have taken absolute value 
    }

    return res/2;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif
    string s, t;
    cin >> s >> t;
    cout << CheckAnargam(s,t);
return 0;
}