#include<bits/stdc++.h>
using namespace std;
class Node 
{
public:
    int data;
    Node* next;


    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
       
    }
    Node(int data1) {
        data = data1;
    
        next = NULL;
    }
};

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
// // iterative approach
// Node* reverseLL(Node* head) {
//     Node* temp = head;
//     Node* prev = nullptr;
//     while (temp != NULL)
//     {
//         Node* front = temp->next;
//         temp->next = prev;
//         prev = temp;
//         temp = front;
//     }
//     return prev;


// }
Node* reverseLL(Node* head) {
Node* temp  = head;
   if( temp == nullptr || head->next == nullptr) return temp;

   Node* newHead = reverseLL(temp->next);
   Node* front = temp->next;
   front->next = temp;

   head->next = nullptr;
   return newHead;

}
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDEGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
     vector<int> arr = {1, 3, 4, 5};
    Node* head = vectorToLL(arr);

    cout << "Original list: ";
    print(head);

    Node* reversedHead = reverseLL(head);

    cout << "Reversed list: ";
    print(reversedHead);

    return 0;

return 0;
}