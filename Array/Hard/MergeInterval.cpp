#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); ++i) {
        vector<int>& last = ans.back();

        // Check if there is an overlap
        if (intervals[i][0] <= last[1]) {
            last[1] = max(last[1], intervals[i][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> arr = mergeIntervals(intervals);

    for (auto it : arr) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl; 
    }

    return 0;
}

