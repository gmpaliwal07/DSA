#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) 
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t; // Number of test cases
    cin >> t;
 
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c; 
        long long result = ((2LL * m - 1) * (n - r) + m - c); // Cast to long long
        cout << result << endl;
    }
 
    return 0;
}
