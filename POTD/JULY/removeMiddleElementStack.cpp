#include<bits/stdc++.h>
using namespace std;
   void deleteMidHelper(stack<int>& s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deleteMidHelper(s, k - 1);   
    s.push(temp);
}
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       if (s.empty() || sizeOfStack == 0)
        return;
    
    int midIndex = (sizeOfStack / 2) + 1;
  
    deleteMidHelper(s, midIndex);
    }

int main() {
    int t;
    cin>>t;   
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            
            deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
