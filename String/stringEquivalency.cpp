#include<bits/stdc++.h>
using namespace std;
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    std::string concatenatedString1 = std::accumulate(
        word1.begin(),
        word1.end(),
        std::string()
    );
     std::string concatenatedString2 = std::accumulate(
        word2.begin(),
        word2.end(),
        std::string()
    );
    if(concatenatedString1 == concatenatedString2) return true;
    else return false;
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<string> word1;
    vector<string> word2;
    int n, m;
    cin >> n >> m;
    for(auto i = 0 ; i < n; i++) {
        string s;
        cin >> s;
        word1.push_back(s);
    }
    for(auto it : word1) cout << it << " " ;

    cout << endl; 
 
    for(auto i = 0 ; i < m; i++) {
        string s;
        cin >> s;
        word2.push_back(s);
    }
    for(auto it : word2) cout << it << " ";
    cout << endl;
    int ans = arrayStringsAreEqual(word1,word2);

    if(ans == 1) cout << "true";
    else cout << "false";
return 0;
}