#include<bits/stdc++.h>
using namespace std;
vector<int> finalPrices(vector<int> &prices) {
       int n = prices.size();
    vector<int> result = prices; 
    stack<int> s; // Monotonic stack to store indices of prices
    
    for (int i = 0; i < n; i++) {
       
        while (!s.empty() && prices[s.top()] >= prices[i]) {
            int index = s.top();
            s.pop();
            result[index] -= prices[i]; // Apply the discount
        }
        s.push(i); // Push the current index to the stack
    }
    
    return result;


}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr =  {8,5,6,2,3};
vector<int> ans = finalPrices(arr);
for(auto it : ans){
    cout << it << " ";
}
return 0;
}