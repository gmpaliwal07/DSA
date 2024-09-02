#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    public :
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


Node* removeTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr; }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
Node* head = nullptr;
Node* tail = nullptr;
int data;
cin >> data;
while(data != -1) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail =newNode;

    }
    cin >> data;
}
cout << "Before" << endl;
Node* current = head;
while (current !=NULL)
{
    cout << current->data << " ";
    current = current->next;    
}
head = removeTail(head);
cout << "After" << endl;
current = head;
while (current !=NULL)
{
    cout << current->data << " ";
    current = current->next;    
}
 
return 0;
}