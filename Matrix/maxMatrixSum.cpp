#include<bits/stdc++.h>
using namespace std;
  long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
    long long absSum = 0;
    int negCount = 0;
    int minAbsValue = INT_MAX;

    // Traverse the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int value = matrix[i][j];
            absSum += abs(value); 
            if (value < 0) negCount++;
            minAbsValue = min(minAbsValue, abs(value)); // Track minimum absolute value
        }
    }

    if (negCount % 2 == 0) {
        return absSum;
    } else {
        return absSum - 2 * minAbsValue;
    }
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
vector<vector<int> > matrix = {{1,-1},{-1,1}};
return 0;
}