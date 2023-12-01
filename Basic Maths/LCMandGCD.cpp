#include<bits/stdc++.h>
using namespace std;

vector<long long> lcmAndGcd(long long A , long long B) {
    long long gcd;
    for (long long  i = 1; i <= min(A,B); i++)
    {
        if(A % i == 0 && B % i  == 0) {
          gcd = i;
        }
    }
    long long  lcm = (A*B)/gcd;

    return {lcm,gcd};


// time complexity is O(min(A,B))
// use eucledian Algorithm. O(log(min(A,B)))
}
int main(int argc, char const *argv[])
{
    int num1 = 5 , num2 = 10;
   vector<long long > ans = lcmAndGcd(num1, num2);
   cout << ans[0] << " " << ans[1];
return 0;
}