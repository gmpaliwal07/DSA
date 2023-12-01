#include<bits/stdc++.h>
using namespace std;
int findMinimumRotated(vector<int> &arr) {
    int start = 0;
    int end = arr.size()-1;
    int ans = INT_MAX;
    while (start <= end)
    {
      int mid = (start+end) /2;
      if(arr[start] <= arr[mid]) {
        ans = min(ans,arr[start]);
        start = mid +1;
      }else {
        end = mid -1;
        ans = min(ans,arr[mid]);
      }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt", "w",stdout);
#endif
vector<int> arr;
int n;
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << findMinimumRotated(arr);
return 0;
}