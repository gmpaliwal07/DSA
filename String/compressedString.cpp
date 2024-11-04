#include<bits/stdc++.h>
using namespace std;
string compressedString(string word) {
 string ans  = "";
 int it =0;
 while(it < word.size()) {
    char curr = word[it];
    int cnt = 0;
    while(it < word.size() && word[it] == curr && cnt < 9) {
        cnt++;
        it++;

    }
    ans+= to_string(cnt) + curr;
 }
 return ans;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
string word = "aaaaaaaaaaaaaab";
cout << compressedString(word);
return 0;
}