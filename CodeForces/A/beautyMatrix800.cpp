#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vi vector<ll>
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define rloop(i,a,b) for(ll i=a;i>=b;i--)

void file_i_o() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int beautyMatrix(vector<vector<int>>& matrix) {
    int indI = 0, indJ = 0;

    // Find the position of '1' in the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                indI = i;
                indJ = j;
            }
        }
    }

    // Calculate the number of moves to bring '1' to the center (3,3 -> index 2,2)
    return abs(2 - indI) + abs(2 - indJ);
}

int main(int argc, char const* argv[]) {
    clock_t begin = clock();
    file_i_o();
#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "Time: " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << "s\n";
#endif

    vector<vector<int>> matrix(5, vector<int>(5)); // Initialize a 5x5 matrix

    // Input the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output the result
    cout << beautyMatrix(matrix);

    return 0;
}
