#include<bits/stdc++.h>
using namespace std;
int countStudents(vector<int> &arr, int pages) {
    
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (pagesStudent + arr[i] <= pages) {
            //add pages to current student
            pagesStudent += arr[i];
        }
        else {
            //add pages to next student
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}

int bookAllocation(vector<int>& arr,  int m) {
    if (m > arr.size()) return -1;

    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    while (start <= end) {
        int mid = (start + end) / 2;
        int students = countStudents(arr, mid);
        if (students > m) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return start;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr;
int n, m;
cin >> n >> m;
for(auto i  = 0; i <= n; i++){
    int a;
    cin >> a;
    arr.push_back(a);
}
cout << bookAllocation(arr, m);
return 0;
}