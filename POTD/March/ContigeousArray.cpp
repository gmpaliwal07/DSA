#include<bits/stdc++.h>
using namespace std;
int ContigeousArray(vector<int> &arr) {
   int maxLength = 0;
    int cnt = 0;
    unordered_map<int, int> binaryFreq{{0, -1}}; 

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0)
            cnt--;
        else
            ++cnt;

        if (binaryFreq.count(cnt)) {
            maxLength = max(maxLength, i - binaryFreq[cnt]);
        } else {
            binaryFreq[cnt] = i;
        }
    }

    return maxLength;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> binaryArr  = {0,1};
cout << ContigeousArray(binaryArr);
return 0;
}