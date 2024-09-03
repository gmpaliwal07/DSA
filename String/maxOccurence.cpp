#include<bits/stdc++.h>
using namespace std;
char maxOccurence(string s) {
    vector<int> arr(26,0);
    // create a frequency track of each char
    for(auto i = 0 ; i < s.length(); i++) {
        int number =0;
        number = s[i] - 'a';
        arr[number]++;
    }
    

    int maxi = -1, ans =0;
for(auto i = 0; i < 26; i++) {
    if(maxi < arr[i]) {
        ans = i;
        maxi = arr[i];
    }
}
char ANS = 'a'+ans;
return ANS;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" , "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string s;
cin >> s;
cout << maxOccurence(s);

return 0;
}