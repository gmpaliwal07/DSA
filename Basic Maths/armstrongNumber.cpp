#include<bits/stdc++.h>
using namespace std;

string is_Armstrong(int n) {
    int sum = 0;
    int N = n;
  int cnDigit = 0;
   int temp = n;
   while (temp >0)
   {
    cnDigit++;
    temp = temp /10;

   }
   
    while (N > 0)
    {
        int last_digit = N % 10;
        sum = sum +pow(last_digit,cnDigit);
        N = N/10;
    }

    if (n == sum)
    {
       return "Yes";
    }
    else {
        return "No";
    }
    
  
    
}
int main(int argc, char const *argv[])
{
    int n = 153;
cout << is_Armstrong(n);
return 0;
}