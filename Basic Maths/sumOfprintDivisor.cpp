#include<bits/stdc++.h>
using namespace std;
long long sumOfDivisors(int N)
    {
        long long sum = 0;
        long long n = N;
        for (long long  i = 1; i <= n; i++)
        {
            if(n % i ==0) {
                sum = sum +i;
            }
        }
        
        return sum;
    }
int main(int argc, char const *argv[])
{
int n = 36;
sumOfDivisors(n);
return 0;
}