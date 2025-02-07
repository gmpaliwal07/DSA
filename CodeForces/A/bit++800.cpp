#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int op;
    cin >> op;
    int x = 0;
    string s;
    
    while(op--) {
        cin >> s;
        if(s == "X++" || s == "++X" || s=="x++" || s=="++x") {
            x++;
        } else if(s == "X--" || s == "--X" || s=="x--" || s=="--x") {
            x--;
        }
    }

    cout << x; 
    return 0; 
}
