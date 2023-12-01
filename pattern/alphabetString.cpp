#include<bits/stdc++.h>
using namespace std;
void print12(int n)
  {
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <='A'+i;j++)
        {
            cout << j << " ";
        }
  cout << endl;      
    }
    
  }
int main(int argc, char const *argv[])
{
int n = 5;
print12(n);
return 0;
}