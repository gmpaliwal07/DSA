#include<bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int> &g, vector<int> &s) {
    std::sort(g.begin(), g.end());
    std::sort(s.begin(), s.end());
    int j = 0;

    for (int i = 0; i < s.size() && j < g.size(); ++i) {
        if (s[i] >= g[j]) {
            j++;
        }
    }
    return j;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> s;
vector<int> g;
int n, m;
cin >> n >> m;
for(auto i = 0 ; i < m; i++) {
    int a; 
    cin >>a;
    g.push_back(a);
}
for(auto i = 0 ; i < n; i++) {
    int a; 
    cin >>a;
    s.push_back(a);
}
cout << findContentChildren(g,s);
return 0;
}