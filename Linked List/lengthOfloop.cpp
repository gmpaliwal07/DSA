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
Node *vectorToll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(auto i = 1; i< arr.size(); i++) 
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void createCycle(Node *head, int pos) {
    if(head == nullptr || head->next == nullptr) return;
    Node* cycleNode = nullptr;
    Node* temp = head;
    int cnt =0;
    while(temp->next != nullptr) {
        if(cnt == pos) {
            cycleNode = temp;
        } 
        temp = temp->next;
        cnt++;
    }
    if(cycleNode != nullptr) {
        temp->next = cycleNode;
    }
}
int lengthOfLoop(Node* head) {
    Node* temp = head;
      if(head == nullptr || head->next == nullptr) return -1;

   Node* slow = head;
   Node* fast = head;
   bool hasCycle = false;
   while(fast != nullptr && fast->next !=nullptr) {
    slow = slow->next;
    fast = fast->next->next;  
    
    if(slow == fast ) {
        hasCycle  =true;
        break;
    }
    }
    if(!hasCycle) return -1;

    slow = head;
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    
     int cnt = 1;
    fast = fast->next; 
    while (slow != fast) {
        fast = fast->next;
        cnt++;
    }

    return cnt;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,2,3,4,5};
Node* head = vectorToll(arr);
int pos =2;
createCycle(head,pos);
cout << lengthOfLoop(head);
return 0;
}