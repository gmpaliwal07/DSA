#include<bits/stdc++.h>
using namespace std;
 vector<long long> factorialNumbers(long long N)
    {
        vector<long long> result;
        long long num = 1, m = 1;
        while(true) {
            num = num * m;
            if(num > N) break;
            result.push_back(num);
            m += 1;
        }
        return result;
    } 
int main(int argc, char const *argv[])
{
long long  n = 5;
vector<long long> ans = factorialNumbers(n);
for ( auto it : ans)
{
    cout << it << " ";
}
return 0;
}