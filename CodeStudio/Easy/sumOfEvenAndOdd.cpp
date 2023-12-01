#include<bits/stdc++.h>
using namespace std;
int sumOfEvenandOdd(int n) {
    string str = to_string(n);
    int OddSum = 0;
    int EvenSum = 0;
    for(auto i = 0 ; i < str.length(); i++) {
        int digit  = str[i] - '0';
        if(digit%2==0) {
            EvenSum = EvenSum + digit;
            
        }else {
            OddSum =  OddSum + digit;
             
        }
    }



    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout); 
#endif
int n;
cin >> n;
cout << sumOfEvenandOdd(n);
return 0;
}