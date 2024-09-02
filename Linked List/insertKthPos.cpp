#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next  = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert an array to a linked list
Node *convertArr2LL(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (auto i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to insert a node at position k
Node* insertAtK(Node* head, int k, int val) {
    if (head == nullptr && k != 1) {
        return nullptr;
    }

    if (k == 1) {
        return new Node(val, head);
    }

    Node* prev = nullptr;
    Node* temp = head;
    int cnt = 0;

    while (temp != nullptr) {
        cnt++;
        if (cnt == k) {
            prev->next = new Node(val, temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    // Handle insertion at the end or out-of-bounds (optional)
    if (cnt + 1 == k) {
        prev->next = new Node(val);
    }

    return head;
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 2, 3, 4};
    int val = 5;
    int k = 1;

    Node* head = convertArr2LL(arr);
    Node* head1 = insertAtK(head, k, val);

    while(head1 != nullptr) {
        cout << head1->data << " ";
        head1 = head1->next;
    }

    return 0;
}
