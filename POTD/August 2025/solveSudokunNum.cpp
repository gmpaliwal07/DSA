#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld  long double
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

bool check_digit(int row, int col, char digit, vector<vector<char>>& board) {
    for (int j = 0; j < 9; j++)
        if (board[row][j] == digit) return false;
    for (int i = 0; i < 9; i++)
        if (board[i][col] == digit) return false;
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[startRow + i][startCol + j] == digit) return false;
    return true;
}

void solveSudoku(vector<vector<char>>& board) {
    std::function<bool()> backtrack = [&]() {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    for (char ch = '1'; ch <= '9'; ch++) {
                        if (check_digit(i, j, ch, board)) {
                            board[i][j] = ch;
                            if (backtrack()) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    };
    backtrack();
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();

    vector<vector<char>> board(9, vector<char>(9));

    // Input the Sudoku board
    // Use '.' for empty cells
    cout << "Enter 9x9 Sudoku board (use '.' for empty cells):\n";
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];

    // Solve the Sudoku
    solveSudoku(board);

    // Print the solved board
    cout << "\nSolved Sudoku:\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << board[i][j] << " ";
        cout << "\n";
    }

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\nTime: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms\n";
#endif

    return 0;
}
