#include<bits/stdc++.h>
using namespace std;
void swapNum(int a, int b){
    a= a^b;
    b = a^b; //(a^b) ^b = a;
    a= a^b; // (a^b) ^ a  = b;
    cout << a << " "<< b;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a = 5, b = 6;
swapNum(a,b);

return 0;
}