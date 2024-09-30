#include<bits/stdc++.h>
using namespace std;
class CustomStack {
public:


vector<int> st; 
int maxSize;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if (st.size() < maxSize) {
            st.push_back(x);
        }
    }
    
    int pop() {
         if (st.empty()) {
            return -1;
        } else {
            int top = st.back();
            st.pop_back();
            return top;
        }
    }
    
    void increment(int k, int val) {
        int limit = min(k, (int)st.size()); 
        for (int i = 0; i < limit; i++) {
            st[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int maxSize = 4;
CustomStack* obj =  new CustomStack(maxSize);
obj->push(4);
obj->push(5);
obj->push(6);
obj->push(7);
cout << obj->pop();
obj->increment(5,100);
cout << obj->pop();

obj->increment(1,100);
cout << obj->pop();
return 0;
}