#include<bits/stdc++.h>
using namespace std;
int MajorityElement(vector<int> &arr) {
    int n  = arr.size();
    int cnt = 0;
    int el;
    for (auto i = 0; i < n; i++)
    {
        if(cnt == 0) {
            cnt =1;
            el = arr[i];
        }
        else if (arr[i] ==el) {
            cnt++;
        }else {
            cnt--;
        }

    }
    int cnt1 = 0;
        for(auto i=0; i <n;i++) {
            if(arr[i] == el) cnt1++;
        }
        if(cnt1 > n/2) {
            return el;
        }
    return -1;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n;
cin >> n;
vector<int> arr;
for(auto i  = 0; i < n; i++) {
    int a;
    cin >> a;
    arr.push_back(a);
}

cout << MajorityElement(arr);
return 0;
}



// moore's Voting Algorithm