#include<bits/stdc++.h>
using namespace std;
int consecutiveOnes(vector<int> &arr) {
        int cnt = 0;
        int n = arr.size();
        int max_cnt = 0;
        for (auto i = 0; i < n; i++)
        {
            if(arr[i] ==1) 
            {
                cnt++;
                max_cnt = max(max_cnt, cnt);
            }
            else {
                cnt = 0;
            }
        }
        
    return max_cnt;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n; 
cin >> n;
vector<int> vec;
for (auto i = 0; i < n; i++)
{
    int a;
    cin >> a;
    vec.push_back(a);
}
cout << consecutiveOnes(vec);
return 0;
}