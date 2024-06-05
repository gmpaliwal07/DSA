#include <bits/stdc++.h>
using namespace std;
void FindCommonChar(const vector<string> &name)
{
    vector<string> ans;
    unordered_map<char, int> freq;
    for (const auto &it : name)
    {
        for (auto ch : it)
        {
            freq[ch]++;
        }
    }
//    for(auto it : freq ) {
//     if(it.second > 1) {
//         ans.push_back(it.first);
//     }
//    }
//    return ans;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<string> name{"bella", "hello", "nice"};
    vector<string> ans = FindCommonChar(name);    
    for(auto it : ans) {
        cout << it << " ";
            }
    return 0;
}
