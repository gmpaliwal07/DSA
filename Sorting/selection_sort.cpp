#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> arr, int n) {
    for (int i = 0; i <=n-2; i++)
    {
        int minima = i;
        for (int j = i; j <= n-1; j++)
        {
            if(arr[j] < arr[minima]) {
                minima = j;
            }

        }
        swap(arr[minima], arr[i]);

        // swap psuedo code
        // int temp = arr[minima];
        // arr[minima] = arr[i];
        // arr[i] = temp;
        
    }
    

    for (auto it : arr)
    {
        cout << it << " ";
    }
    
}
int main(int argc, char const *argv[])
{
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    int a;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.emplace_back(a);
    }
    
    cout << "Before Sort : " << endl;
    for ( auto it : arr)
    {
        cout << it <<  " " ; 
    }
    cout << endl;
    cout << "After Sort : " << endl;
    selection_sort(arr, n);
return 0;
}