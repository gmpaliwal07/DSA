#include<bits/stdc++.h>
using namespace std;
vector<int> leaderArray(vector<int> arr) {
    int n = arr.size(); 
    int maxi =INT_MIN;
    vector<int> ans;
    for(auto i = n; i < 0; i--) {
        if(arr[i] > maxi) {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }

sort(arr.begin(), arr.end());

    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n ;
cin >> n ;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}
int k  = leadersArray(arr);

return 0;
}