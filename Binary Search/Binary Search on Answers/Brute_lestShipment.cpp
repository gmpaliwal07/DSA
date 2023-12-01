#include<bits/stdc++.h>
using namespace std;
int Days(vector<int> &arr, int cap) {
    int days = 1, load = 0;
    for(auto i = 0; i < arr.size()-1; i++) {
        if(load+arr[i] > cap) {
            days = days +1;
            load  = arr[i];
        }
        else {
            load += arr[i];
        }
    }
    return days;
}
int Brute_leastShipment(vector<int> &arr) {
     int minCapacity = INT_MAX;
    int totalItems = arr.size();
    
    for (int cap = arr[0]; cap <= accumulate(arr.begin(), arr.end(), 0); cap++) {
        if (Days(arr, cap) <= 3) {
            minCapacity = min(minCapacity, cap);
        }
    }
    
    return minCapacity;
} 
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int minCapacity = Brute_leastShipment(arr);
    cout << minCapacity << endl;
    return 0;
return 0;
}