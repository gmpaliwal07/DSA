#include<bits/stdc++.h>
using namespace std;
int maxIndex(vector<int> &arr) {
    int n = arr.size();
    // int res = 0;

    // for (int i = 0; i < n - 1; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[j] >= arr[i]) {
    //             res = max(res, j - i);
    //         }
    //     }
    // }

    // return res;
    // bruteforce approach 

 int leftMin[n] ;
    leftMin[0] = arr[0];
    for(int i = 1 ; i<n; i++)
        leftMin[i] = min(leftMin[i-1], arr[i]);
 
 
    //leftMin[i] = min{ arr[0...i] }
 
 
    int maxDist = INT_MIN;
    int i = n-1, j = n-1;
 
    while(i>=0  &&  j>=0)
    {
        if(arr[j] >= leftMin[i])
        {
            maxDist = max(maxDist, j-i);
            i--;
        }
        else
            j--;
    }
 
    return maxDist;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t; 
cin >> t;
while(t--) {
int n;
cin >> n;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << maxIndex(arr)  << endl;
}
return 0;
}