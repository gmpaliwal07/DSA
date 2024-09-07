#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    
 stack<int> st;
  stack<int> minSt; 
    MinStack() {
        minSt.push(INT_MAX);
    }
  
    void push(int val) {
        st.push(val);
        minSt.push(min(val, minSt.top()));
            }
    
    void pop() {
          if (!st.empty()) {
            st.pop();   
            minSt.pop(); 
        }

    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w" ,stdout);
#endif

return 0;
}