#include<bits/stdc++.h>
using namespace std;
int Chocolatedistri(vector<int> arr, int m ){
  int n = arr.size();

    if (m == 0 || n < m) {
        return -1; 
    }

    std::sort(arr.begin(), arr.end());

    int minDiff = INT_MAX;

    // Traverse the sorted list and use a window of size equal to `m`
    for (int i = 0; i <= n - m; i++) {
        int currentDifference = arr[i + m - 1] - arr[i];
        minDiff = std::min(minDiff, currentDifference);
    }

    return minDiff;
}
int main(int argc, char const *argv[])
{
#ifndef ONLNE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {3,4,9,56,9,12};
int m = 5;

return 0;
}