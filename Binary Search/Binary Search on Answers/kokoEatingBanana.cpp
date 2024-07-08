#include<bits/stdc++.h>
using namespace std;
int calculateTotalHours(vector<int> &arr, int hourly) {
int total = 0;
for(auto i = 0; arr.size(); i++) {
    total+=ceil(arr[i]/hourly);
}
return total;

}
 int minEatingSpeed(vector<int>& piles, int h) {
        int  low = 1;
        int high = *max_element(piles.begin(), piles.end());
        
        while (low < high)
        {
            int  mid  = (low+high) /2;
            int total = calculateTotalHours(arr,mid);
            if(total <= h) {
                high = mid -1;
            }
            else {
                low = mid+1;
            }
        }
        return low;
        
    }

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
#endif
vector<int> arr = {3,6,7,11};
int h = 8;

return 0;
}