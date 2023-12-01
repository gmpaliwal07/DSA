#include<bits/stdc++.h>
using namespace std;
void print9(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            if((i+j)%2 == 0) {
                cout << "1 ";
            }else { 
                cout << "0 ";
            }
        }
        cout << endl;
    }
    
}
int main(int argc, char const *argv[])
{
int n = 5;
print9(n);
return 0;
}


// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 