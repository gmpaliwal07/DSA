#include<bits/stdc++.h>
using namespace std;
bool threeCOnsecutiveOdds(vector<int> &arr) {
    int cnt = 0;
    for(auto it:arr ) {
        if(it%2 != 0) {
            cnt++;
        }
        else {
            cnt =0;
        }
        if(cnt == 3) return true;
    
    }
    
    return false;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,2,34,3,4,5,7,23,12};  
int ans  = threeCOnsecutiveOdds(arr);
(ans == 0) ? cout << "false" : cout << "true";
return 0;
}