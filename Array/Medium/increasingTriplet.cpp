#include<bits/stdc++.h>
using namespace std;
bool increasingTriplet(vector<int> &arr) {
  int first = INT_MAX, second = INT_MAX;

    for (int it : arr) {
        if (it <= first) {
            first = it;  
        } else if (it <= second) {
            second = it;
        } else {
            return true;
        }
    }

    return false;
}
bool solu(vector<int> &arr)  // not optimal correct for the testcase 
{
     int i = 0, j = 1, k = 2;  

    while (k < arr.size()) {
        if (arr[i] < arr[j] && arr[j] < arr[k]) {
            return true;
        }

        i++;
        j++;
        k++;
    }

    return false;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,2,3,4,5};
int ans = solu(arr);
cout << (ans ? "true" : "false");
return 0;
}
