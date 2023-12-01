#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
vector <int> v = {1,23,12,321,112};
int n = v.size();
cout << "Before Sort"  << "\n";
for (auto it : v)
{
    cout << it << " ";
}
cout << endl;
sort(v.begin(), v.end());
cout << "After Sort"  << "\n";

for (auto it : v)
{
    cout << it << " ";
}


//decending order

// sort(v,v+n, greater<int>)

cout <<endl;
string s = "645";
sort(s.begin(), s.end() );
do{
    cout << s << endl;
}while(next_permutation(s.begin(), s.end()));
// int max = *max_element(s.begin(), s.end);
return 0;
}