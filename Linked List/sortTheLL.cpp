#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data1, Node *next1 = nullptr) {
        data = data1;
        next = next1;
    }
};
Node* convertArr2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (size_t i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* middle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Disconnect the first half from the second
    if (prev != nullptr) {
        prev->next = nullptr;
    }
    
    return slow;
}

Node* mergeHead(Node* left, Node* right) {
    if (left == nullptr) return right;
    if (right == nullptr) return left;

    Node* mergedHead = nullptr;

    if (left->data <= right->data) {
        mergedHead = left;
        mergedHead->next = mergeHead(left->next, right);
    } else {
        mergedHead = right;
        mergedHead->next = mergeHead(left, right->next);
    }

    return mergedHead;
}

Node* sortLL(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;

    // Find the middle of the list and split it
    Node* middleEle = middle(head);
    Node* rightHead = sortLL(middleEle);   // Sort the right half
    Node* leftHead = sortLL(head);         // Sort the left half

    return mergeHead(leftHead, rightHead); // Merge sorted halves
}

int main(int argc, char const *argv[]) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {5, 4, 3, 2, 1};
    Node* head = convertArr2LL(arr);
    Node* head1 = sortLL(head);

    while(head1 != nullptr) {
        cout << head1->data << " ";
        head1 = head1->next;
    }

    return 0;
}
