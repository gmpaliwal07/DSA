#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1; 
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

 void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}


int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {3, 4, 52, 21};
    Node* head = nullptr;
    Node* current = nullptr;

    for (int i = 0; i < arr.size(); ++i) {
        if (head == nullptr) {
            head = new Node(arr[i]);
            current = head;
        } else {
            current->next = new Node(arr[i]);
            current = current->next;
        }
    }

    printLL(head);

    return 0;
}
