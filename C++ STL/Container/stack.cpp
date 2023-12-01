#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> sc; 
    sc.push(1);
sc.push(5);
sc.push(4);
sc.push(3);
sc.push(2);
sc.emplace(9);

// /print the stack.;
  while (!sc.empty()) {
        cout << sc.top() << " ";
        sc.pop();
    }
return 0;
}


//LIFO 