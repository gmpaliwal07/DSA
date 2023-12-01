#include<bits/stdc++.h>
using namespace std;
void print10(int n) {
    int spaces = 2*(n-1);
    for (int i = 1; i <=n; i++)
    {
        
       // number 
       for (int j = 1; j <=i; j++)
       {
        cout << j ;
       }
       //space
       for (int j = 1; j <= spaces; j++)
       {
        cout << " ";
       }
       //number
       for (int j = i; j >= 1; j--)
       {
            cout << j ;
       }
       cout << endl;

       spaces -= 2;
    }
}
int main(int argc, char const *argv[])
{
int n =4;
print10(n);
return 0;
}