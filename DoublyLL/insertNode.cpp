#include<bits/stdc++.h>
using namespace std;
class Node {
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
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;            

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp; 
        prev = temp;       
    }
    return head;  
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* insertNode(Node *head, int k) {
    Node* newNode = new Node(k);
        if(head == NULL ){
        return newNode;
        }

    Node* tail = head;
    while (tail->next !=nullptr){
        tail = tail->next;
    }
    tail->next  = newNode;
    newNode->back  = tail;
    return head;
  
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r" , stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = {1,2,3,4};
int k  =5;
 Node* head = convertArrto2ll(arr);
 print(head);
 cout << endl;
//  Node* head1 = insertNode(head, k);
//  print(head1);
return 0;
}