#include<bits/stdc++.h>
using namespace std;
int SubarraySumsDivisiblebyK(vector<int> &arr, int key) {
     unordered_map<int, int> remainderCount;
        remainderCount[0] = 1; 
        int cumulativeSum = 0;
        int count = 0;
        
        for (int num : nums) {
            cumulativeSum += num;
            int remainder = cumulativeSum % k;
            
            if (remainder < 0) remainder += k;
          
            if (remainderCount.find(remainder) != remainderCount.end()) {
                count += remainderCount[remainder];
            }
            remainderCount[remainder]++;
        }
        
        return count;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {5};
int k = 9;
cout << SubarraySumsDivisiblebyK(arr, k);
return 0;
}