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
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
Node* head = nullptr;
Node* tail  = nullptr;
int data;
cin >> data;
while(data != -1){
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    cin >> data;
}
Node* current  = head;
cout << "Before :" << endl;
while(current != NULL) {
    cout << current->data << " ";
    current = current->next;
}
cout << endl << "After : " << endl;
head = insertHead(head, 34);
current = head;
while (current !=NULL)
{
    cout << current->data << " ";
    current = current->next;    
}
return 0;
}