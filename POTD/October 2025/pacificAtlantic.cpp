#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Solution
{
public:
    int m, n;
    vector<vector<int>> heights;
    vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    void dfs(int r, int c, vector<vector<int>> &ocean)
    {
        ocean[r][c] = 1;

        for (auto [dr, dc] : dir)
        {
            int nr = r + dr;
            int nc = c + dc;

            // boundary check
            if (nr < 0 || nc < 0 || nr >= m || nc >= n)
                continue;

            // skip if already visited
            if (ocean[nr][nc])
                continue;

            // move only if next height >= current height
            if (heights[nr][nc] < heights[r][c])
                continue;

            dfs(nr, nc, ocean);
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heightsInput)
    {
        heights = heightsInput;
        m = heights.size();
        n = heights[0].size();

        vector<vector<int>> pacific(m, vector<int>(n, 0));
        vector<vector<int>> atlantic(m, vector<int>(n, 0));

        // DFS from Pacific edges
        for (int i = 0; i < m; ++i)
            dfs(i, 0, pacific);
        for (int j = 0; j < n; ++j)
            dfs(0, j, pacific);

        // DFS from Atlantic edges
        for (int i = 0; i < m; ++i)
            dfs(i, n - 1, atlantic);
        for (int j = 0; j < n; ++j)
            dfs(m - 1, j, atlantic);

        // Collect result
        vector<vector<int>> result;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (pacific[i][j] && atlantic[i][j])
                    result.push_back({i, j});
            }
        }

        return result;
    }
};

int main()
{
    file_i_o();

    vector<vector<int>> heights = {
        {1, 2, 2, 3, 5},
        {3, 2, 3, 4, 4},
        {2, 4, 5, 3, 1},
        {6, 7, 1, 4, 5},
        {5, 1, 1, 2, 4}};

    Solution sol;
    vector<vector<int>> result = sol.pacificAtlantic(heights);

    cout << "Cells that can flow to both oceans:\n";
    for (auto &cell : result)
    {
        cout << "[" << cell[0] << ", " << cell[1] << "]\n";
    }

    return 0;
}
