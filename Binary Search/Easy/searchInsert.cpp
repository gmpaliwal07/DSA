#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &vec, int key) {
    int start = 0;
    int end = vec.size()-1;
    while (start <= end) {
        int mid = (start+end)/2;
        if(vec[mid] == key) {
            return mid;
        }else if(vec[mid] < key) {
            start = mid+1;
        }else {
            end = mid -1;
        }
    }
    return -1;
    
    
}
int insertPosition(vector<int> &arr, int key) {
    int res = binarySearch(arr, key);

    if (res == -1) {
        for (auto i = 0; i < arr.size(); i++) {
            if (arr[i] > key) {
                arr.insert(arr.begin() + i, key);
                return i;
            }
        }
        arr.push_back(key);  // If key is greater than all elements, insert at the end
        return arr.size() - 1;
    }
    return res;
}


// we can directly implement the lowerbound code

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >>n;
vector<int> arr;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    arr.push_back(a);
}
int key; 
cin >> key;
cout << insertPosition(arr, key);
return 0;
}