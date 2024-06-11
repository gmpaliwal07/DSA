#include<bits/stdc++.h>
using namespace std;
string sortByFreq(string &s){
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto it : freq) {
        pq.push({it.second, it.first});
    }

    string result;
    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        result += string(top.first, top.second);
    }

    return result;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt",  "w", stdout);
#endif
string s = "tree";
string str = sortByFreq(s);
cout << str << " ";
return 0;
}