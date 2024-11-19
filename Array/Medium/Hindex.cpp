#include<bits/stdc++.h>
using namespace std;
int hIndex(vector<int> &citations) {
    int hIndex = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for (int i = 0; i < citations.size(); i++) {
            if (i + 1 <= citations[i]) { 
                hIndex = i + 1;
            } else {
                break;
            }
        }
        return hIndex;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {3,1,1};
cout << hIndex(arr);

return 0;
}