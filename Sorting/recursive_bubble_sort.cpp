#include<bits/stdc++.h>
using namespace std;
void recursive_bubbleSort(vector<int> &vec, int n) {
    if(n==1) return;
    for (int i = 0; i <=n-2; i++)
    { 
        if(vec[i] > vec[i+1]) {
            swap(vec[i], vec[i+1]);
        }
    }
    recursive_bubbleSort(vec,n-1);
}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
vector<int> vec;
int n; 
cin >> n;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    vec.emplace_back(a);
}

for(auto it : vec) cout << it << " ";
cout << endl;
recursive_bubbleSort(vec,n);
for(auto it : vec) cout << it << " ";

return 0;
}