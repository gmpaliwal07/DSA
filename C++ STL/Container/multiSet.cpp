#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    multiset<int>ms;
    ms.insert(1);
    ms.insert(12);
    ms.insert(11);
    ms.insert(90);
    ms.insert(1);
    ms.insert(12);
    ms.insert(12);

    for (auto  it= ms.begin(); it != ms.end() ; it++)
    {
        cout << *it << " ";
    }
    ms.erase(1);  // all 12 erase from the set.
cout << endl;
    for (auto  it= ms.begin(); it != ms.end() ; it++)
    {
        cout << *it << " ";
    }
cout << endl;
    int count = ms.count(12);
    cout << count;

   
    return 0;
}

// same as the set but also store the duplicate element 

//rest all same as the set.