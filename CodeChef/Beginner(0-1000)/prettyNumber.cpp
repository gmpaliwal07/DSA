#include<bits/stdc++.h>
using namespace std;
int prettyNumber(int l,int r) {
    for(auto i = l; i <= r; i++) {
        if(i == 2  || i == 3  || i == 9){
            return i;
        }else  {
            return i;
        }

    }
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt" ,"w", stdout);
#endif
int t;
cin >> t;
while (t--)
{
    int l,r;
    cin >> l >> r;

    cout << prettyNumber(l,r);
}

return 0;
}