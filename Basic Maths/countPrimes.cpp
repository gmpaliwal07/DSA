#include<bits/stdc++.h>
using namespace std;
void  countPrime(int n) {
    int cnt = 0;
    vector<bool>prime(n+1,true);

    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if(prime[i] ) {
            cout  << i << endl;

            for (int j = 2*i; j <n; j  =j +i)
            {
                prime[j] = 0;
            }
            
        }
    }



    //Sieve of Eratosthenes
}
int main(int argc, char const *argv[])
{
int n = 100;
 countPrime(n);
return 0;
}