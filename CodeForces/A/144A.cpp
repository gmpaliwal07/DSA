#include <bits/stdc++.h>
using namespace std;

#define loop(i, a, b) for (int i = a; i < b; i++)
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
int main() {
    file_i_o();
    int n;
    cin >> n;
    vector<int> heights(n);

    loop(i, 0, n) cin >> heights[i];

    // Find the index of the maximum and minimum elements
    int maxIdx = 0, minIdx = 0;

    loop(i, 0, n) {
        if (heights[i] > heights[maxIdx]) maxIdx = i;
        if (heights[i] <= heights[minIdx]) minIdx = i;
    }

    // Calculate the minimum number of swaps needed
    int swaps = maxIdx + (n - 1 - minIdx);
    if (maxIdx > minIdx) swaps--; // Adjust for overlap when maxIdx is before minIdx

    cout << swaps << endl;
    return 0;
}
