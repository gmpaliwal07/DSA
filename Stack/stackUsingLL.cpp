#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class Stack {
private:
    Node* top;  

public:

    Stack() {
        top = nullptr;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
        cout << "Pushed " << value << " onto the stack." << endl;
    }


    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow! No elements to pop." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Popped " << temp->data << " from the stack." << endl;
        delete temp;
    }

    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }


    ~Stack() {
        while (top != nullptr) {
            pop();
        }
    }
};
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt","w" ,stdout);
#endif
    Stack s;
    
    int n, value;
    cin >> n; 

    for (int i = 0; i < n; ++i) {
        string operation;
        cin >> operation;
        if (operation == "push") {
            cin >> value;
            s.push(value);
        } else if (operation == "pop") {
            s.pop();
        } else if (operation == "peek") {
            cout << "Top element is: " << s.peek() << endl;
        }
    }

    if (s.isEmpty()) {
        cout << "Stack is empty now." << endl;
    }
return 0;
}