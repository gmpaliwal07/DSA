#include<bits/stdc++.h>
using namespace std;

int LargestElement(vector<int> &vec, int n) {
    int Largest = 0;
   for (auto i = 0; i < n; i++)
   {
        if(Largest <= vec[i]) {
            Largest = vec[i];
        }
   }
   return Largest;
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
    cout << LargestElement(vec, n);
    
return 0;
}