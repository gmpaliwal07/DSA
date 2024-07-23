#include<bits/stdc++.h>
using namespace std;
vector<int> frequencySort(vector<int>& nums) {
     unordered_map<int, int> freq;
     for(auto it : nums) {
        freq[it]++;
     }

     sort(nums.begin(), nums.end(), [&](int a, int b){
        if(freq[a] == freq[b]) {
            return a >b;
        }
        return freq[a] < freq[b];
     });
     return nums;
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,1,2,2,2,3};
vector<int> ans = frequencySort(arr);
for(auto it : ans ){
    cout << it << " ";
}
return 0;
}