#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define ff first
#define ss second

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

bool isRectangleEmpty(pair<int, int> &A, pair<int, int> &B, vector<vector<int>> &points)
{
    for (auto &p : points)
    {
        if ((p[0] == A.first && p[1] == A.second) || (p[0] == B.first && p[1] == B.second))
            continue;

        if (p[0] >= A.first && p[0] <= B.first && p[1] <= A.second && p[1] >= B.second)
            return false;
    }
    return true;
}

// Check if A is upper-left of B
bool isUpperLeft(pair<int, int> &A, pair<int, int> &B)
{
    return (A.second >= B.second) && (B.first >= A.first) && !(A == B);
}

int numberOfPairs(vector<vector<int>> &points)
{
    int cnt = 0;
    int n = points.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            pair<int, int> A = {points[i][0], points[i][1]};
            pair<int, int> B = {points[j][0], points[j][1]};

            if (isUpperLeft(A, B) && isRectangleEmpty(A, B, points))
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    vector<vector<int>> points = {{6, 2}, {4, 4}, {2, 6}};
    cout << numberOfPairs(points); // Output 2

    return 0;
}
