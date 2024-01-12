#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch) 
{ 
    ch = toupper(ch); 
    return (ch=='A' || ch=='E' || ch=='I' || 
                       ch=='O' || ch=='U'); 
} 
bool check(string &s){
    int n = s.size();
    int half = n/2;
    string s1 = s.substr(0,(n/2));
    string s2 = s.substr((n/2), n);
    int cnt1 = 0;
    for(auto it : s1){
        if(isVowel(it)) cnt1++;
    }
    for(auto it : s2){
        if(isVowel(it)) cnt1--;
    }
    if(cnt1 ==0) return true;
    else return false;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    #endif
string s;
cin >> s;
int ans = check(s);
(ans == 0) ? cout <<"false" : cout << "true"; 
return 0;
}