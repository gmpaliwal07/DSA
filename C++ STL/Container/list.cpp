#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
list<int> ls;
ls.push_back(2);
ls.emplace_back(100);
ls.emplace_front(23);
ls.push_back(4);
for(auto it:ls) {
    cout << it << " ";
}
// rest of the function same as vector;
return 0;
}