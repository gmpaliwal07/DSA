#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
set<int> s;
s.insert(1);
s.emplace(1);
s.insert(23);
s.insert(8);
s.insert(7);
s.insert(2);

for (auto it : s)
{
    cout << it << " ";
}
cout << endl;
auto it = s.find(12);
(it != s.end()) ?  cout << "true" : cout<< "false";
int count = s.count(1);
cout << endl << count;

auto it1 = s.find(1);
auto it2 = s.find(8);
s.erase(it1,it2);
cout <<endl;
for (auto it : s)
{
    cout << it << " ";
}


// 
return 0;
}


// unique 
// sorted