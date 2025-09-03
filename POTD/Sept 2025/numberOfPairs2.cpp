#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>

class Solution {
private:
    vector<ll> xs, ys;               
    vector<vector<int>> psum;        

    // Coordinate compression helper
    int getX(ll x) { return lower_bound(xs.begin(), xs.end(), x) - xs.begin(); }
    int getY(ll y) { return lower_bound(ys.begin(), ys.end(), y) - ys.begin(); }

    // Check if A is upper-left of B
    bool isUpperLeft(pii &A, pii &B) {
        return (A.second >= B.second) && (B.first >= A.first) && !(A == B);
    }

    // Check if rectangle defined by A and B contains any other point using prefix sum
    bool isRCempty(pii &A, pii &B) {
        int x1 = getX(A.first), y1 = getY(A.second);
        int x2 = getX(B.first), y2 = getY(B.second);

        int left = min(x1, x2), right = max(x1, x2);
        int bottom = min(y1, y2), top = max(y1, y2);

        // Count points inside rectangle
        int cnt_inside = psum[right + 1][top + 1] - psum[left][top + 1] 
                       - psum[right + 1][bottom] + psum[left][bottom];

        // Subtract the two corners
        cnt_inside -= 1; // A
        cnt_inside -= 1; // B

        return cnt_inside == 0;
    }

    // Build prefix sum grid
    void buildPrefixSum(vector<vector<int>>& points) {
        xs.clear(); ys.clear();
        for (auto &p : points) {
            xs.push_back(p[0]);
            ys.push_back(p[1]);
        }
        sort(xs.begin(), xs.end());
        xs.erase(unique(xs.begin(), xs.end()), xs.end());
        sort(ys.begin(), ys.end());
        ys.erase(unique(ys.begin(), ys.end()), ys.end());

        int nx = xs.size(), ny = ys.size();
        vector<vector<int>> grid(nx, vector<int>(ny, 0));
        for (auto &p : points) {
            grid[getX(p[0])][getY(p[1])] = 1;
        }

        psum.assign(nx + 1, vector<int>(ny + 1, 0));
        for (int i = 0; i < nx; i++) {
            for (int j = 0; j < ny; j++) {
                psum[i + 1][j + 1] = grid[i][j] + psum[i][j + 1] + psum[i + 1][j] - psum[i][j];
            }
        }
    }

public:
    int numberOfPairs(vector<vector<int>>& points) {
        buildPrefixSum(points);

        int n = points.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;

                pii A = {(ll)points[i][0], (ll)points[i][1]};
                pii B = {(ll)points[j][0], (ll)points[j][1]};

                if (isUpperLeft(A, B) && isRCempty(A, B))
                    cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> points = {{6,2}, {4,4}, {2,6}};
    cout << sol.numberOfPairs(points) << endl; // Correct count
    return 0;
}
