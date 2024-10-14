#include<bits/stdc++.h>
using namespace std;
long long maxKelement(vector<int> &nums, int k) {
    priority_queue<long long> maxHeap;
    for (int it : nums) {
        maxHeap.push(it);
    }
    
    long long score = 0;

    for (int i = 0; i < k; ++i) {

        long long maxEle = maxHeap.top();
        maxHeap.pop();

        score += maxEle;
        long long reducedElem = ceil(maxEle / 3.0);
        maxHeap.push(reducedElem);
    }
    
    return score;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,10,3,3,3};
int k =3;
cout << maxKelement(arr, k);
return 0;
}