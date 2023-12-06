#include<bits/stdc++.h>
using namespace std;
int numberOfMatches(int n) {
    int matches = 0;
    while ( n > 1)
    {
        if(n % 2 == 0) {
            matches +=n/2;
            n/=2;
        }
        else {
            matches+=(n-1)/2;
            n = (n-1)/2+1;
        }
    }
    return matches;
    
}
int main(int argc, char const *argv[])
{
 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

int n;
cin >> n;
cout << numberOfMatches(n );
return 0;
}