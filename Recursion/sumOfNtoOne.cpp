#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int cnt = 1;
int sumOfNtoOne(int n) {
   if (cnt > n) return sum;

   sum+=cnt;
   cnt++;
  return sumOfNtoOne(n);
     
}
int main(int argc, char const *argv[])
{
int n = 10;
cout << sumOfNtoOne(n);
return 0;
}