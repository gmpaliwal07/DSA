#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
string s;
cin >> s;
// precompute
map<char,int> hash;
for(int i = 0 ; i < s.size(); i++) {
    hash[s[i]]++;
}

int q;
cin >> q;
while (q--)
{
    char c;
    cin >> c;

    //fetch
    cout << hash[c] << " ";
}
for(auto it : hash) {
    cout << it.first << "-->" << it.second << endl;
}

return 0;
}


// we can replace precompute with unordered map as well
// Syntax :
// map<int,int> mpp;
// for(int i = 0; i< n; i++) {
//     mpp[arr[i]]++ ;
// }
