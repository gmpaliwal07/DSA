#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
pair<int,int> p = {1,3};
cout << p.first << " " << p.second;

pair<int,pair<int,int>> pi = {1 , {4,5}};
cout << pi.first << " " << pi.second.second << pi.second.first;


pair<int,int> arr[ ] = {{1,2},{4,5}, {6,7}};
cout << arr[2].first;  // 6
return 0;
}

// #include<utility>