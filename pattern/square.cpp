// *****
// *****
// *****
// *****
#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
for (int i = 0; i <= n-1; i++)
{
for (int j = 0; j <= n-1; j++)
{
    cout << "*";

}
    cout << endl;
}

}
int main(int argc, char const *argv[])
{

int n;
cin >> n;
print1(n);

return 0;
}