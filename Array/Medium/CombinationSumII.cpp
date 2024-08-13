#include<bits/stdc++.h>
using namespace std;
void findCombinations(int index, int target, vector<int>& candidates, vector<int>& current, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }

    for (int i = index; i < candidates.size(); i++) {
        if (i > index && candidates[i] == candidates[i - 1]) continue;

        if (candidates[i] > target) break;

        current.push_back(candidates[i]);
        findCombinations(i + 1, target - candidates[i], candidates, current, result);
        current.pop_back();
    }
}
 vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

          vector<vector<int>> result;
    vector<int> current;

    sort(candidates.begin(), candidates.end());

    findCombinations(0, target, candidates, current, result);
    return result;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr= {10,1,2,7,6,1,5};
int target  = 8;
  vector<vector<int>> result = combinationSum2(arr, target);
    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }
return 0;
}