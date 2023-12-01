#include<bits/stdc++.h>
using namespace std;
void print6(int n) {
    for (int i = 0; i < n; i++)
   {
    //space
    for (int j = 0; j <i; j++)
    {
        cout << " ";
    }
    //star 
    for (int j = 0; j < 2*n - (2*i+1); j++)
    {
        cout << "*";
    }
    // space
    for (int j = 0; j < i; j++)
    {
        cout << " ";
    }

    cout << endl;
   }
}
int main(int argc, char const *argv[])
{
int n = 5;
print6(n);
return 0;
}


// *********
//  ******* 
//   *****  
//    ***   
//     *  