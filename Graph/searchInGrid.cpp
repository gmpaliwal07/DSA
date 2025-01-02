#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll,ll>
#define ump unordered_map
#define mp map
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll,vi,greater<ll>>
#define ff first
#define ss second
#define mid(l,r) (l+(r-l)/2)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)
#define logarr(arr,a,b) for(ll i=a;i<b;i++) cout<<arr[i]<<' '; cout<<endl;

void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool recurse(vector<vector<char>>& grid, string& word, int n, int i, int row, int col) {
    if (i == word.size()) return true; // Found the entire word
    if (row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != word[i]) return false;

    // Mark the cell as visited
    char temp = grid[row][col];
    grid[row][col] = '$';

    // Recursive call
    int rows[] = {-1, 1, 0, 0};
    int cols[] = {0, 0, -1, 1};
    bool retval = false;
    loop(d, 0, 4) {
        retval = recurse(grid, word, n, i + 1, row + rows[d], col + cols[d]);
        if (retval) break;
    }

    // Restore the cell
    grid[row][col] = temp;
    return retval;
}

bool findword(vector<vector<char>>& grid, string& word, int n) {
    loop(i, 0, n) {
        loop(j, 0, n) {
            if (grid[i][j] == word[0] && recurse(grid, word, n, 0, i, j)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "ms\n";
#endif

    string word = "ABCCED";
    int n = 3;

    vector<vector<char>> grid(n, vector<char>(n));
    loop(i, 0, n) {
        loop(j, 0, n) {
            cin >> grid[i][j];
        }
    }

    cout << (findword(grid, word, n) ? "Found" : "Not Found") << "\n";

    return 0;
}
