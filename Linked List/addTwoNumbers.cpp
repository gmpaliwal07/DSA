#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
Node(int data1, Node* next1)
{
    data = data1;
    next = next1;
}
Node(int data1) {
    data = data1;
    next = nullptr;
}
};
Node* vecToLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(auto i = 1; i< arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* addTwoNumbers(Node* l1, Node* l2) {
Node* dummyHead = new Node(0); 
    Node* current = dummyHead;
    int carry = 0;

    while (l1 != nullptr || l2 != nullptr || carry != 0) {
        int sum = carry;

        if (l1 != nullptr) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2 != nullptr) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        current->next = new Node(sum % 10);
        current = current->next;
    }

    Node* result = dummyHead->next;
    delete dummyHead; 
    return result;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr1 = {1,2,3};
vector<int> arr2 = {2,3,4};
Node* head1 = vecToLL(arr1);
Node* head2 = vecToLL(arr2);
Node* ans = addTwoNumbers(head1, head2);
while(ans != nullptr) {
    cout << ans->data << " ";
    ans = ans->next;
}

return 0;
}