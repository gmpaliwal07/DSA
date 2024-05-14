#include<bits/stdc++.h>
using namespace std;
int stockBuyAndSell(vector<int> &prices) {
    int n = prices.size();
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" , "r", stdin );
freopen("output.txt", "w", stdout);
#endif

int n;
cin >> n;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin  >> a;
    arr.push_back(a);
}
cout << stockBuyAndSell(arr);
return 0;
}