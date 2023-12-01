#include<bits/stdc++.h>
using namespace std;
void zerosToEnd(vector<int> &arr) {
    int n = arr.size();
    // for (auto i = 0; i < n; i++)
    // {
    //     for (auto j = 0 ; j < i+1; j++)
    //     {
    //         if(arr[j] == 0) {
    //             swap(arr[i], arr[j]);
    //         }
    //     }
        
    // }    it shows TLE


        int left_ptr = 0, right_ptr = 0;
    while (right_ptr < n) {
        if (arr[right_ptr] != 0) {
            swap(arr[left_ptr], arr[right_ptr]);
            left_ptr++;
        }
        right_ptr++;
    }



    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> vec;
int n;
cin >> n;
for (auto  i = 0; i < n; i++)
{
    int a;
    cin >> a;
    vec.push_back(a);
}
zerosToEnd(vec);

for(auto it : vec) {
    cout <<  it << " ";
}
return 0;
}