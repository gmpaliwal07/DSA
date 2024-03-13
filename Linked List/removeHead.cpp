#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* removeHead(Node* head) {
    if (head == nullptr) 
        return nullptr;

    Node* newHead = head->next;
    delete head;

    return newHead;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt", "w", stdout);
#endif

    Node* head = nullptr;
    Node* tail = nullptr;
    int data;
    cin >> data;

    while (data != -1) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }

    cout << "Before ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    cout << "After ";
    head = removeHead(head); 
        // Updating first node
    current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
