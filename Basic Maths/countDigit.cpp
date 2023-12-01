#include<bits/stdc++.h>
using namespace std;
int  countDigit(int n) {
    int count = 0;
    while (n>0)
    {
        int last_digit = n%10;
        count++; 
        n = n/10;
        cout << n;
           } 
    return count;
    
}
int main(int argc, char const *argv[])
{
int n ; 
cin >> n;
cout << countDigit(n);
return 0;
}