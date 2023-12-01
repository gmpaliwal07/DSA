#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex-1);
        qs(arr,pIndex+1, high);
    }
}
void quickSort(vector<int> &arr) {
    qs(arr,0, arr.size()-1);
  
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr;
    int n ;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.emplace_back(a);
    }
    

    for(auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    quickSort(arr);

    for(auto it : arr) cout << it << " ";
     
return 0;
}