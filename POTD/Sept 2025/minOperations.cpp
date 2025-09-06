#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
    // compute steps using MSB trick
    int stepsToZero(int x) {
        if (x == 0) return 0;
        int msb = 31 - __builtin_clz(x);   // index of highest set bit
        return (msb / 2) + 1;
    }

    long long prefixSteps(long long n) {
        if (n <= 0) return 0;

        long long total = 0;
        long long start = 1;
        int step = 1;

        while (start <= n) {
            long long end = min(n, (1LL << (2 * step)) - 1); // range [start .. 4^step - 1]
            long long len = end - start + 1;
            total += len * step;
            start = end + 1;
            step++;
        }
        return total;
    }

public:
    long long minOperations(vector<vector<int>>& queries) {
        long long total_ops = 0;
        for (auto &q : queries) {
            long long l = q[0], r = q[1];

            long long total_steps = prefixSteps(r) - prefixSteps(l - 1);

            total_ops += (total_steps + 1) / 2;
        }
        return total_ops;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> queries = {{1,2}, {2,4}, {2,6}};
    Solution sol;
    cout << sol.minOperations(queries) << "\n"; // Expected: 3 for first two queries, 4 for [2,6]

    return 0;
}
