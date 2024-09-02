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
        data= data1;
        next = nullptr;
    }
};
Node* deleteK(Node* head, int k) {
    if (head == NULL)
        return head;
//  delete the node first 
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    int cnt = 0;
    while (temp != NULL) {
        cnt++;
        if (cnt == k) {
            // skipping Kth Node
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
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
while (data != -1)
{
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;

    }
    cin >>  data;
}
Node* current  = head;
cout << "Before : " << endl;
while (current !=NULL)
{
    cout << current->data << " ";
    current = current->next;
}
cout << endl << "After : " << endl;
head = deleteK(head, 4);
current = head;
while (current !=NULL)
{
    cout << current->data << " ";
    current = current->next;    
}
return 0;
}