#include<bits/stdc++.h>
using namespace std;
void print18(int n) {
     for (int i = 0; i <n; i++)
   {
    //space
    for (int j = 0; j <(n-i-1); j++)
    {
        cout << " ";
    }
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
//pattern
  for (int j = 1; j <= 2*i+1; j++)
  {
    cout << ch;
    if (j <=breakpoint) ch++;
    else ch--;
    
  }
  
    // space
    for (int j = 0; j <(n-i-1); j++)
    {
        cout << " ";
    }

    cout << endl;
   }
   
}
int main(int argc, char const *argv[])
{
int n = 5;
print18(n);
return 0;
}