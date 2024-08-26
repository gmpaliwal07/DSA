#include<bits/stdc++.h>
using namespace std;
int maxCosecutiveOnes(vector<int> &arr, int k) {
    int maxLen = 0, l = 0, r= 0, zeros = 0;
    while(r < arr.size()) {
        if(arr[r] == 0) zeros++;
        while(zeros > k) {
            if(arr[l] == 0) zeros--;
            l++;
        }
        if(zeros <=k) {
            maxLen = max(maxLen, r-l+1);
        }
        r++;
    }
      return maxLen;
} 
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr  ={1,1,1,0,0,0,1,1,1,1,0};
;
int k =2;
cout << maxCosecutiveOnes(arr,k);
return 0;
}