#include<bits/stdc++.h>
using namespace std;
int Days(vector<int> &arr, int cap) {
    int days = 1; 
    int load = 0;
    int n = arr.size(); 
    for (int i = 0; i < n; i++) {
        if (load + arr[i] > cap) {
            days += 1; 
            load = arr[i];
        }
        else {
            
            load += arr[i];
        }
    }
    return days;
}

int leastShipment(vector<int> &arr, int d) {
    
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int numberOfDays = Days(arr, mid);
        if (numberOfDays <= d) {
            //eliminate right half
            high = mid - 1;
        }
        else {
            //eliminate left half
            low = mid + 1;
        }
    }
    return low;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt", "w", stdout);
#endif
int n,d; 
cin >> n >> d;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}

cout<< leastShipment(arr, d);
return 0;
}