#include<bits/stdc++.h>
using namespace std;
void print21(int  n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0 || j == n-1 || i == n-1)
            cout << "*";
            else 
            cout << " ";
        }
        cout << endl;
    }
    
}
int main(int argc, char const *argv[])
{
int n = 3;
print21(n);
return 0;
}