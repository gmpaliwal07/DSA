#include <bits/stdc++.h>
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
    ll n,sum=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        sum+=(i+1)*(n-i)-i;
    }
    cout<<sum<<endl;
}
