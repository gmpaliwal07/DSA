#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    int next;
    Node(int data1, int next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data= data1;
        next = nullptr;
    }
};
Node* vectorTOLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(auto i =1; i< arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp; 
        mover = temp;
    }
    return head;
}
Node* modifiedList(Node* head, vector<int> &arr) {
    Node* temp = head;
    Node* prev = nullptr;
    
    unordered_set<int> toDelete(arr.begin(), arr.end()); // Using a set for faster lookups
    
    while (temp != nullptr) {
        if (toDelete.count(temp->data)) {
            // Delete node logic
            if (prev == nullptr) {  // Deleting the head
                Node* newHead = temp->next;
                delete temp;
                temp = newHead;
                head = newHead;
            } else {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    
    return head;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,2,3};
vector<int> nums = {1,2,3,4,5};
Node* head = vectorTOLL(nums);
Node* head1 = modifiedList(head, arr);
while(head1 != nullptr ){
    cout << head1->data << " ";
    head1 = head1->next; 
}
return 0;
}