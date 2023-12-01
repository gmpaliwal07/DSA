#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(1); 
    q.push(10);
    q.push(90);
    q.push(100);


    q.back() += 21;  // this will add 21 to the last entered element in the queue

    while (!q.empty()) 
    {
        cout << q.front() << " ";
        q.pop();
    }

    
    
return 0;
}

//FIFO