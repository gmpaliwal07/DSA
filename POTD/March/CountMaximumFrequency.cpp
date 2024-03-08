#include<bits/stdc++.h>
using namespace std;
int CountMaximumFrequency(vector<int> &arr ){
         int ans = 0;
         int maxfreq = 0;
    unordered_map<int, int> freq;
    for (auto it : arr) {
        freq[it]++;
    }
    for (auto it : freq) {
    maxfreq = max(maxfreq, it.second);
    }

    for(auto it : freq) {
        if(it.second == maxfreq) {
            ans +=it.second;
        }
    }

    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" ,"w", stdout);
#endif
vector<int> arr;
int n;
cin >> n;
for(auto it = 0; it < n;it++) {
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << CountMaximumFrequency(arr);
return 0;
}