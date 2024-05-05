#include<bits/stdc++.h>
using namespace std;
int numRescueBoats(vector<int> &people , int limit) {
    sort(people.begin(), people.end());
    int boats = 0;
    int left = 0, right = people.size() -1;
    while (left <= right)
    {
        if(people[left]+people[right]  <= limit){
            left++;

        }
        right--;
        boats++;
    }
    return boats;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> people;
int n, limit;
cin >> n >> limit;
for(auto i = 0; i < n; i++) {
    int a;
    cin >>a;
    people.push_back(a);
}
cout << numRescueBoats(people, limit);
return 0;
}