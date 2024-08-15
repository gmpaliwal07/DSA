#include<bits/stdc++.h>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        back = NULL;
        next = NULL;
    }
};

Node* reverseLL(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store the next node
        current->next = prev; // Reverse the next pointer
        current->back = next; // Reverse the back pointer
        prev = current;       // Move prev and current one step forward
        current = next;
    }
    return prev; // New head of the reversed list
}

Node* vectorToLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 3, 4, 5};
    Node* head = vectorToLL(arr);

    cout << "Original list: ";
    print(head);

    Node* reversedHead = reverseLL(head);

    cout << "Reversed list: ";
    print(reversedHead);

    return 0;
}
