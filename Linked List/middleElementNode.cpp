#include <bits/stdc++.h>
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
        back = nullptr;
        next = nullptr;
    }
};

Node* vectorToDLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;            

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp; 
        prev = temp;       
    }
    return head;  
}
// this is the naive approach of the solving this problem 
// Node* middleElement(Node* head) 
// {
//     int ans = 0;
//     Node* temp = head;

//     while (temp != nullptr)
//     {
//         ans++;
//         temp = temp->next;  
//     }

//     temp = head;
//     ans = ans / 2; 

//     while (ans--) {
//         temp = temp->next;
//     }

//     return temp;
// }
//  tortoise and hare approach
Node* middleElement(Node * head) {
Node* temp = head;
    Node* slow = temp;
    Node* fast = temp;

    while(fast != NULL && fast->next != NULL ) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" ,stdin);
freopen("output.txt", "w" ,stdout);
#endif

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node* head = vectorToDLL(arr);
    Node* ans = middle(head);
    cout << ans->data;
    return 0;
}
