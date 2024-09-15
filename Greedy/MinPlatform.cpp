#include<bits/stdc++.h>
using namespace std;
int minPlatform(vector<int> &arri,vector<int> &dep) {
    int n = arri.size();
    int platform = 1, maxPlatform = 1;
    int i = 1, j = 0;  

    while(i < n && j < n) {
        if(arri[i] <= dep[j]) {
            platform++;
            i++;
        } else {
            platform--;
            j++;
        }
        maxPlatform = max(maxPlatform, platform);
    }
    return maxPlatform;

}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    vector<int> arri = {900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};
cout << minPlatform(arri, dep);
return 0;
}