#include<bits/stdc++.h>
using namespace std;
bool SumOfSquareNumber(int c) {
        if (c < 0) return false;
    for (int i = 0; i*i <= c; ++i) {
        int j = sqrt(c - i * i);
        if (i * i + j * j == c) {
            return true;
        }
    }
    return false;
    

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout );
#endif
int c = 5;
int ans = SumOfSquareNumber(c);
(ans == 1) ? cout  << "true" : cout << "false"; 
return 0;
}