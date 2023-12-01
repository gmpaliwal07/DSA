#include<bits/stdc++.h>
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
   stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;
}
int main(int argc, char const *argv[])
{
queue<int> q;
q.push(1);

q.push(2);
q.push(3);
q.push(4);
q.push(5);




return 0;
}