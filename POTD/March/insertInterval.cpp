#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size(), i = 0;
        vector<vector<int>> res;
        while (i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }    
        while (i < n && newInterval[1] >= intervals[i][0]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);
        while (i < n) {
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
return 0;
}