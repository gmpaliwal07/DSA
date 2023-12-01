#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
vector<int> vec ;
vec.push_back(1);
vec.emplace_back(2);
vec.emplace_back(4);
vec.emplace_back(7);
vec.emplace_back(9);
vec.emplace_back(10);
vector<pair<int,int>> v;
v.push_back({1,2});
v.emplace_back(1,2);



// iterator 

vector<int>::iterator it = vec.begin();
it ++;
cout << *it << " ";    cout << endl;
it = it+2;
cout << *it << " ";
cout << endl;
vector<int>::iterator itr = vec.end();
itr--;
cout << *itr << " ";
cout << endl;

// print vector 

for (auto it = vec.begin(); it  != vec.end(); it++)
{
   cout << *(it) << " ";
}
cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}
//deletetion

vec.erase(vec.begin() +1);


cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}

// 1 4 7 9 10
vec.erase(vec.begin() +1,vec.begin()+4);

cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}


vec.insert(vec.begin(),200);

cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}

vec.pop_back();

cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}
vector < int> vec2 = {1,2,3,};
vec.swap(vec2);


cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}

vec.clear();


cout << endl;
for (auto  it : vec )
{
    cout << it << " "; 
}
cout << v.empty();
return 0;
}

//dynamic in nature
// emplace_back would construct the object immediately in the vector, while push_back , would first construct 
// an anonymous object and then would copy it to the vector.


//for vector 10,20,30,40
//v.end moves to the after 40;