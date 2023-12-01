#include<bits/stdc++.h>
using namespace std;
void print8(int n) {
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = n-1; i >=1 ; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout  << "*";
        }
        cout << endl;
    }
    
}
int main(int argc, char const *argv[])
{
int n  = 5;
print8(n);
return 0;
}