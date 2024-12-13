#include <bits/stdc++.h>
using namespace std;

// Direction vectors to move up, down, left, right
vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void dfs(int i, int j, vector<vector<char>> &board, int n, int m) {
    if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != 'O') 
        return;

    board[i][j] = '#'; // Mark it as visited or non-flippable

    for (auto dir : directions) {
        int ni = i + dir.first;
        int nj = j + dir.second;
        dfs(ni, nj, board, n, m);
    }
}

void surroundedRegions(vector<vector<char>> &board) {
    int n = board.size();
    if (n == 0) return;
    int m = board[0].size();

    // Step 1: DFS from border 'O's and mark them as non-flippable ('#')
    for (int i = 0; i < n; i++) {
        if (board[i][0] == 'O') dfs(i, 0, board, n, m);  // First column
        if (board[i][m - 1] == 'O') dfs(i, m - 1, board, n, m); // Last column
    }

    for (int j = 0; j < m; j++) {
        if (board[0][j] == 'O') dfs(0, j, board, n, m);  // Top row
        if (board[n - 1][j] == 'O') dfs(n - 1, j, board, n, m); // Bottom row
    }

    // Step 2: Flip all 'O's to 'X' and '#' back to 'O'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'O') board[i][j] = 'X'; // Flip to 'X'
            if (board[i][j] == '#') board[i][j] = 'O'; // Unmark
        }
    }
}

void printBoard(vector<vector<char>> &board) {
    for (auto row : board) {
        for (auto ch : row) cout << ch << " ";
        cout << endl;
    }
}

int main() {
    vector<vector<char>> board = {
        {'X', 'X', 'X', 'X'},
        {'X', 'O', 'O', 'X'},
        {'X', 'X', 'O', 'X'},
        {'X', 'O', 'X', 'X'}
    };

    cout << "Original Board: " << endl;
    printBoard(board);

    surroundedRegions(board);

    cout << "Board after surrounded regions: " << endl;
    printBoard(board);

    return 0;
}
