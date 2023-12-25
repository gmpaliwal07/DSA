#include<bits/stdc++.h>
using namespace std;
string removeOccurence(string s, string part){
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s, part;
cin >> s >> part;
cout << removeOccurence(s,part);
return 0;
}