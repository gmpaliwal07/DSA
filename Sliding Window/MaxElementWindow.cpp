#include<bits/stdc++.h>
using namespace std;
int printMaxElementWindow(vector<int> &arr, int k) {
       priority_queue<int, vector<int>, greater<int>> queue;
       vector<int> vec;
       int i =0;
       for(;i<k;i++) queue.emplace(arr[i]);
       vec.push_back(queue.top());

       queue.pop(arr[0]);
       for(; i< k; i++ ){
        queue.emplace(arr[i]);
        vec.push_back(queue.top());
        queue.pop(arr[i-k+1]);
       }

       return res;
// Better Solution 
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {4,1,2,3,4,5,3,2,7,6,4};
int k = 0;
int ans = printMaxElementWindow(arr,k);
for(auto it : arr) {
    cout << it << " " ;
}




return 0;
}