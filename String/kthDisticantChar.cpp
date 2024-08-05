#include<bits/stdc++.h>
using namespace std;
string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        string ans ;
        for(auto it : arr) {
            mp[it]++;
        }
        for(auto it : mp) {
            if(it.second > 1)  {
                ans.push_back(it.first);
        }

        return ans[k-1];
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
vector<string> arr = {"d","b","c","b","c","a"};
int k = 2;

return 0;
}