#include<bits/stdc++.h>
using namespace std;
class Node  {
    public:
    int data;
    Node* back;
    Node* next;

    Node(int data1, Node* back1, Node* next1){
        data= data1;
        back = back1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back =nullptr;
    }
};
Node* deleteHead(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back ==  nullptr;
    head->next == nullptr;
    delete prev; // in java we don't have to write this 
    return head; 
}
Node* deleteTail(Node* head) {
    if(head == nullptr || head->next == nullptr) return nullptr;
    Node* tail = head;
    while (tail->next !=nullptr)
    {
        tail= tail->next;
    }
    Node* newTail = tail->back; //store new tail
    newTail->next == nullptr;
    newTail->back == nullptr;
    delete tail;
    return head;

}
Node* convertToDLL(vector<int> &arr){
        Node* head = new Node(arr[0]); // first element
        Node* prev = head;
        for(auto i = 1; i <=arr.size(); i++ ){
            Node* temp =  new Node(arr[i],prev, nullptr);
            prev->next = temp;
            prev = temp;
        }
        return head;

}
Node* deleteKthEle(Node* head, int k) {
    if(head == nullptr) return nullptr;
    int cnt = 0;
    Node* kNode = head;
    while (kNode != nullptr){
        cnt++;
        if(cnt == k)break;
        kNode = kNode->next;
    } // we are on the kth node
    
    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev == nullptr && front == nullptr)return nullptr;
    else if(prev == nullptr) return deleteHead(head);
    else if(front == nullptr) return deleteTail(head);
    prev->next = front;
    front->back = prev;
    kNode->next = nullptr;
    kNode->back = nullptr;
    delete kNode;
    return head;
}
void print(Node* head) {
     while(head->next !=nullptr) {
        cout << head->data << " ";
         head = head->next;  
    }
    cout << endl;
} 
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r",stdin);
freopen("output.txt", "w" ,stdout);
#endif
vector<int> arr =  {1,2,3,4};
int k = 3;
    Node* head = convertToDLL(arr);
   print(head); 
    
Node* head1 = deleteKthEle(head,k);
print(head1);
return 0;
}