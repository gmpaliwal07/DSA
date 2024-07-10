#include<bits/stdc++.h>
using namespace std;
int minOperations(vector<string>& logs) {
     int ans = 0;
    for(int i = 0; i < logs.size(); i++) 
    {
        if(logs[i] == "../") {
            if (ans > 0) {
                ans--;
            }
        }
        else if(logs[i] == "./") {
            // Do nothing 
        }
        else {
            ans++;
        }
    }
    return ans;
        }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<string> logs = {"d1/","d2/","./","d3/","../","d31/"};
cout << minOperations(logs);
return 0;
}