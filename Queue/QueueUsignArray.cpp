#include<bits/stdc++.h>
using namespace std;

void push(int a, vector<int> &arr) {
    arr.push_back(a);
}

void pop(vector<int> &arr) {
    if(!arr.empty()) {
        arr.erase(arr.begin());
    } else {
        cout << "Stack is empty\n";
    }
}

void top(vector<int> &arr) {
    if (!arr.empty()) {
        cout << arr[arr.size() - 1] << endl;
    } else {
        cout << "Stack is empty\n";
    }
}

void size(vector<int> &arr) {
    cout << arr.size() << "\n"; // Using size() directly
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    vector<int> arr;
    push(12, arr);
    push(32, arr);
    push(45, arr);

    top(arr); 
    size(arr); 

    pop(arr); 
    top(arr);  

    return 0;
}
