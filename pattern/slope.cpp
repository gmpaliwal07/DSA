
#include<bits/stdc++.h>
using namespace std;
void print2(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout << "*";
        }
      cout <<  endl;
    }
    
}
int main(int argc, char const *argv[])
{
int n = 5;
print2(n);
return 0;
}


// *
// **
// ***
// ****
// *****
