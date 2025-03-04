#include<bits/stdc++.h>
using namespace std;
#define ll long long int
    
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
    vector<int> chco(n);

    for(int i = 0; i < n; i++) {
        cin >> chco[i];
    }

    ll num_chco = 0;
    ll prev = 1e9+1;

    for(int i = n-1; i >= 0; i--) {
        if(chco[i] >= prev) {
            chco[i] = prev - 1; 
        }
        num_chco += max(chco[i], 0); 
        prev = chco[i]; 
    }

    cout << num_chco << endl;
    return 0;
}
