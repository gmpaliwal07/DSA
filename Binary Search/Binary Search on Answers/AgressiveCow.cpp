#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int> &stalls, int dist, int cows) {
    int n = stalls.size();
    int cntCows = 1; 
    int last = stalls[0]; 
    for (int i = 1; i < n; i++) {
        if (stalls[i] - last >= dist) {
            cntCows++; //place next cow.
            last = stalls[i]; //update the last location.
        }
        if (cntCows >= cows) return true;
    }
    return false;
}
// int aggresiveCow(vector<int> &vec, int k ) {
//     int n = vec.size();
//     sort(vec.begin(), vec.end());
//     int ans = -1;
//     int min = vec[0];
//     int max = vec[n-1];
    
//      for(auto i = 0 ; i <= (max-min); i++ ){
//         if(CowsWePlace(vec,i,k)) {
//             continue;
//         }
//         else {
//             ans = i-1;
//         }
//      }
//      return ans;
// } linear search 


// binary search 
int aggresiveCow(vector<int> &stalls, int k) {
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int start = 1; 
    int end =  stalls[n-1] - stalls[0];
    while (start <= end) 
    {
        int mid = (start+end)/2;
        if(canWePlace(stalls,mid,k) == true) {
            start = mid+1;
        }else {
            end = mid-1;
        }
    }
    return end;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int n ,k;
cin >> n >> k;
for (auto  i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << aggresiveCow(arr, k);
return 0;
}