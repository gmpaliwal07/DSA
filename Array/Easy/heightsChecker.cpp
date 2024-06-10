#include<bits/stdc++.h>
using namespace std;

        int heightChecker(vector<int>& heights) {
       int cnt = 0;
     
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());

        for (int i = 0; i < heights.size(); i++) {
            if (expected[i] != heights[i]) {
                cnt++;
            }
        }
        return cnt;
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,1,4,2,1,3};
cout << heightChecker(arr);
return 0;
}