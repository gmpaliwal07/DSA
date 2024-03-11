#include<bits/stdc++.h>
using namespace std;
  string customSortString(string order, string s) {
  unordered_map<char, int> orderMap;
    for (int i = 0; i < order.length(); ++i) {
        orderMap[order[i]] = i;
    }
    sort(s.begin(), s.end(), [&](char a, char b) {
        return orderMap[a] < orderMap[b];
    });
    
    return s;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
string s;
string order;
cin >> s >> order;
string str = customSortString(order, s);
cout << str;

return 0;
}