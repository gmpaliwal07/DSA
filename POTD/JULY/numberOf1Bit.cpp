#include<bits/stdc++.h>
using namespace std;
int numberOfoneBit(int n){
    int cnt =0;
    std::string binary = "";
    if (n == 0) {
        return 0;
    }
    while (n > 0) {
        binary = std::to_string(n % 2) + binary;
        n /= 2;
    }

    for (auto i = 0; i < binary.length(); i++)
    {
        if(binary[i] =='1') cnt++;
    }
    return cnt;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n; 
cin >> n;
cout << numberOfoneBit(n);
return 0;
}