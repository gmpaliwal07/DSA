#include<bits/stdc++.h>
using namespace std;
void print13(int n){

    for (int i = 0; i < n; i++)
    {
        char ch = 'A'+i;
        for (int j = 0; j <=i ; j++)
        {
            cout << ch << " ";
        }
      cout <<  endl;
    }
    
}
int main(int argc, char const *argv[])
{
int n =5;
print13(n);
return 0;
}