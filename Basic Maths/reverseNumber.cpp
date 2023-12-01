#include<bits/stdc++.h>
using namespace std;
long long reverseNumber(long long X) {
        long long n = X;
    long long reveNum = 0;
    while (n !=0)
    {
        long long  last_digit = n %10;
        reveNum = (reveNum*10)+last_digit;  

        n = n/10;
    }
   return reveNum;
    }
int main(int argc, char const *argv[])
{
long long N  = -123;
cout << reverseNumber(N);

return 0;
}