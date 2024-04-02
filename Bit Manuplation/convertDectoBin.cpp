#include<bits/stdc++.h>
using namespace std;
string convertToBin(int n){
    string res = "";
    while (n != 1)
    {
        if(n%2 == 1) res+= '1';
        else res+='0';
        n/=2;
    }
    
    return res;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
cout << convertToBin(n);
vector<int> arr;
for(auto it = 0; it < n; it++) {
    int a;
    cin >>a;
    arr.push_back(a);
}

for(auto it : arr) {
    cout << it << " ";

}

return 0;
}