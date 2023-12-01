#include<bits/stdc++.h>
using namespace std;
    int cnt =1 ;
void PrintoneToN(int n)  {
    if (cnt > n) return;

    cout << cnt << " ";

    cnt++;
    PrintoneToN(n);
    
}
int main(int argc, char const *argv[])
{
int n = 10;
PrintoneToN(n);
return 0;
}