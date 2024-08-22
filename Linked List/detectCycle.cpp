#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node* vectorToLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

bool hasCycle(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return false;

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

void createCycle(Node* head, int pos) {
    if (pos == -1) return;

    Node* temp = head;
    Node* cycleNode = nullptr;
    int count = 0;

    while (temp->next != nullptr) {
        if (count == pos) {
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }

    // Create a cycle by connecting the last node to the cycleNode
    if (cycleNode != nullptr) {
        temp->next = cycleNode;
    }
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 2, 3, 4, 5};
    int pos = 2;  // set the position
    Node* head = vectorToLL(arr);

    createCycle(head, pos);

    bool ans = hasCycle(head);

    if (ans) cout << "true";
    else cout << "false";

    return 0;
}
