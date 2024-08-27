#include<bits/stdc++.h>
using namespace std;
 int largestAltitude(vector<int>& gain) {
        int maxAltitude = 0;
        vector<int> prefixSum(gain.size());
        prefixSum[0] = gain[0];
        for(auto i = 1; i < gain.size(); i++){
            prefixSum[i] = prefixSum[i-1]+gain[i];
        }
        for(auto it : prefixSum){
            maxAltitude = max(maxAltitude, it);
        }
        return maxAltitude;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> gain = {-5,1,5,0,-7};
cout << largestAltitude(gain);
return 0;
}