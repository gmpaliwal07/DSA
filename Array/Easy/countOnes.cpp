#include<bits/stdc++.h>
using namespace std;
    
int countOnes(vector<int> &arr) {
    int n = arr.size();
    int cnt = 0;
    int maxCnt = 0;

    for (auto i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cnt++;
            if (cnt > maxCnt) {
                maxCnt = cnt;
            }
        } else {
            cnt = 0;
        }
    }

    return maxCnt;
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
cout<< countOnes(vec);
return 0;
}