#include<bits/stdc++.h>
using namespace std;
void print19(int n) {
     for (int i = 0; i < n; i++)
    {
        for (char  ch = ('A'+n-1)-i; ch<= ('A'+n-1); ch++)
        {
            cout << ch << " ";
        }
        
      cout <<  endl;
    }
     
}
int main(int argc, char const *argv[])
{
int n = 5;
print19(n);
return 0;
}