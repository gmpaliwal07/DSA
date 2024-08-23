#include<bits/stdc++.h>
using namespace std;
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     vector<bool> ans; 
    int maxCandies = *max_element(candies.begin(), candies.end());
    
    for(auto it : candies) {
        if(it + extraCandies >= maxCandies) 
            ans.push_back(true);
        else 
            ans.push_back(false);
    }
    
    return ans;
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> candies = {2,3,5,1,3};
int extraCandies = 3;

  vector<bool> ans = kidsWithCandies(candies, extraCandies);

    for(auto it : ans) {
        cout << (it ? "true" : "false") << " ";
    }
    
return 0;
}