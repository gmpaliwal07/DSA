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
void createCycle(Node* head, int pos) {
    if (pos == -1) return;

    Node* temp = head;
    Node* cycleNode = nullptr;
    int count = 0;

    // Traverse to the node at position `pos`
    while (temp->next != nullptr) {
        if (count == pos) {
            cycleNode = temp;
        }
        temp = temp->next;
        count++;
    }

 
    if (cycleNode != nullptr) {
        temp->next = cycleNode;
    }
}

Node* vectorToLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);

    Node* prev = head;
    for(auto it = 1; it< arr.size(); it++) {
        Node*  temp = new Node(arr[it]);
        prev->next = temp;
        prev = temp;
    }
    return head;
    } 

int startingPoint(Node* head) {
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
    return  slow->data;
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = { 1,2,3,4,5};
Node* head = vectorToLL(arr);
 createCycle(head, 2);
cout << startingPoint(head);

return 0;
}