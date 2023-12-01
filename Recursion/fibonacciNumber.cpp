#include<bits/stdc++.h>
using namespace std;
 vector<long long> printFibb(int n) 
{
    vector<long long> ans;
    if (n >= 1) {
        ans.push_back(1);
    }
    if (n >= 2) {
        ans.push_back(1);
    }
    for (int i = 3; i <= n; i++) {
        long long next_fib = ans[i-3] + ans[i-2];
        ans.push_back(next_fib);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int  n = 5;
vector<long long>ans = printFibb(n);
for(long long it : ans ) {
    cout << it << " "; 
}
return 0;
}