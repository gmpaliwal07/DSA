#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
int n;
cin >> n;
int arr[n];
for (int i = 0; i <n; i++)
{
    cin >> arr[i];
}


// hash Table

 int hash[13] = {0};
for (int i = 0; i < n; i++)
{
    hash[arr[i]]+=1;

}
int q;
cin >> q;
while(q--) {
    int numbers;
    cin >> numbers;
    //fetch
    cout << hash[numbers] << "\n";
}
return 0;
}