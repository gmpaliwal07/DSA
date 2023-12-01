#include<bits/stdc++.h>
using namespace std;
vector<int> mergeTwoArray(vector<int> &arr1, vector<int> &arr2) {
   
    
}
int Median(vector<int> &arr1, vector<int> &arr2) {
    int m = arr1.size();
    int n = arr2.size();
    vector<int> ans;
    for(auto it : arr1) {
        ans.push_back(it);
    }
    for(auto it : arr2) {
        ans.push_back(it);
    }
    sort(ans.begin(), ans.end());
    int ans = -1;
    int start = ans[0];
    int end = ans[ans.size()-1];
    while (start <= end)
    {
        int mid = (start+end)/2;
        
    }
    //pending
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w",stdout);
#endif
return 0;
}