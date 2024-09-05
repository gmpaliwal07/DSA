#include<bits/stdc++.h>
using namespace std;

int MinNumFlipped(int start, int goal) {
    int ans = start ^ goal;  
    int cnt = 0;
    for (int i = 0; i < 31; i++) {
        if ((ans & (1 << i)) != 0) { 
            cnt++;
        }
    }
    return cnt;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int start = 10, goal = 7;
cout << MinNumFlipped(start, goal);
return 0;
}