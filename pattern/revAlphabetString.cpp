#include<bits/stdc++.h>
using namespace std;
void print13(int n) {
     for(int i = n; i>=0 ; i--){
            for (char j = 'A'; j < 'A'+(n-i-1);j++)
        {
            cout << j << " ";
        }
            cout << endl;
        }
}
int main(int argc, char const *argv[])
{
int n = 2;
print13(n);
return 0;
}