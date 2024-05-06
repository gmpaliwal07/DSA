#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1) {
        data = data1;
        next = next1; 
    }

public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

ListNode* removeNodes(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    ListNode* nextNode = removeNodes(head->next);
    if (head->data < nextNode->data) {
        delete head;
        return nextNode;
    } 
    head->next = nextNode;
    return head;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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

    head = removeNodes(head);

    printList(head);

    return 0;
}
