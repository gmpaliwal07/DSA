#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>

void file_i_o() {
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
    vi arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];


    vi result(n);
    for (int i = 0; i < n; i++) {
        result[arr[i] - 1] = i + 1;
    }

  
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
