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
Node *convertArr2DLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node* deleteOccurence(Node* head, int k) {
    Node* temp = head;
    while(temp != nullptr) {
        if(temp->data == k) {
            if(temp == head) head = temp->next;
            Node* nextNode = temp->next;
            Node* prevNode = temp->back;
            if(nextNode != nullptr) nextNode->back = prevNode;
            if(prevNode != nullptr) prevNode->next = nextNode;
            free(temp);
            temp = nextNode;   //move temp to nextNode;
        } else {
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
vector<int> arr = {1,2,3,4,2,2};
int k =2;
Node* head = convertArr2DLL(arr);
Node* ans = deleteOccurence(head,k);
while(ans != nullptr) {
    cout <<  ans->data << " ";
    ans = ans->next;
}
return 0;
}