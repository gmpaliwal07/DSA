#include<bits/stdc++.h>
using namespace std;
int beautySum(string s) {
    unordered_map<int, char> freq;
    for(auto it : s) {
        freq[it]++;
    }

    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();

    for(auto it : freq) {
        if(it.second > max) {
            max = it.second;
        }
        if(it.second < min) {
            min = it.second;
        }
    }  

    return (max-min);

} 
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s = "aabcb";
cout << beautySum(s);
return 0;
}