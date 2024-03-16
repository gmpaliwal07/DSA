#include<bits/stdc++.h>
using namespace std;
void  kthFactorN(int n, int k) {
    vector<int> freq;
    
    int count = 0;
    for(auto it = 1; it <=n; it++) {
        if(n % it == 0) {
            freq.push_back(it);
        } 
    }
    for(auto it : freq) {
        cout << it << " ";
    }
    if(freq[k-1] == 0) cout << -1; 
    else cout << freq[k-1];
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n , k;
cin >> n >> k;
 kthFactorN(n,k);
return 0;
}