#include<bits/stdc++.h>
using namespace std;
int PatchingArray(vector<int> &arr, int n) {
    int upto =0, output =0, i = 0;
    while (upto < n) {
        if (i < arr.size() && arr[i] <= upto + 1) {
          
            upto += arr[i];
            i++;
        } else {
            upto += (upto + 1);
            output++;
        }
    }
    return output;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,3};
int n = 6;
cout << PatchingArray(arr, n);
return 0;
}