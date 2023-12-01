#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
priority_queue<int> pq;
pq.push(12);
pq.push(92);
pq.push(1);
pq.push(13);
pq.push(10);


while (!pq.empty())
{
    cout << pq.top() << " ";
    pq.pop();
}

cout << endl;

// for minimum heap 
priority_queue<int, vector<int>, greater<int>> p;
p.emplace(7);
p.emplace(9);
p.emplace(0);
p.emplace(45);
p.emplace(876);
p.emplace(12);


while (!p.empty())
{
    cout << p.top() << " ";
    p.pop();
}
return 0;
}


//time complexity

// push => logn
//pop => logn
// top => O(1)