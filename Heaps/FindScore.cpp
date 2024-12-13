#include <bits/stdc++.h>
using namespace std;

// Function to calculate score by summing every second smallest element
long long findScore(vector<int> &nums)
{
    int n = nums.size();
    long long score = 0;

    // Min-heap to store (value, index) pairs
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> marked(n, false); // To keep track of which elements are marked

    for (int i = 0; i < n; i++) {
        pq.push({nums[i], i});
    }

    while (!pq.empty()) {
        auto [val, idx] = pq.top();
        pq.pop();

        if (marked[idx]) continue;

      
        score += val;
        marked[idx] = true;
        if (idx > 0) marked[idx - 1] = true;  // Mark left neighbor
        if (idx < n - 1) marked[idx + 1] = true;  // Mark right neighbor
    }

    return score;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {2, 3, 5, 1, 3, 2};
    cout << findScore(arr) << endl;
    return 0;
}
