#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data=data1;
        next = next1;
    }
    public:
    Node(int data1) {
        data= data1;
        next = nullptr;
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
    Node* fast= head;
     while(fast != nullptr && fast->next !=  nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int getLength(Node* head) {
    int length = 0;
    while (head != nullptr) {
        length++;
        head = head->next;
    }
    return length;
}
Node *getIntersection(Node* headA, Node* headB) {
    
     int lenA = getLength(headA);
    int lenB = getLength(headB);

    while (lenA > lenB) {
        headA = headA->next;
        lenA--;
    }
    while (lenB > lenA) {
        headB = headB->next;
        lenB--;
    }

    while (headA != nullptr && headB != nullptr) {
        if (headA == headB) {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }

    return nullptr;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr1 = {1,3,1,2,4};
vector<int> arr2 = {3,2,4};
Node* head1 = convertArr2LL(arr1);
Node* head2 = convertArr2LL(arr2);
Node* ans = getIntersection(head1, head2);
cout << ans->data;

return 0;
}