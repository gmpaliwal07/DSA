#include<bits/stdc++.h>
using namespace std;
int centerGraph(vector<vector<int>> &edges) {
    unordered_map<int, int> freq;
    for(auto it : edges) {
        for(auto ele : it) {
            freq[ele]++;
        }
    }
    for(auto it : freq) {
        if(it.second > 1) {
            return it.first;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int>> edges = {{1,2},{2,3},{4,2}};
cout <<centerGraph(edges);
return 0;
}