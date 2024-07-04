#include<bits/stdc++.h>
usign namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1; 
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* mergeNodes(Node* head) {
    Node ans(0);
    Node* curr = &ans;


    head = head->next;
    int sum = 0 ;
    while (head != NULL)
    {
        if(head->data == 0){

        curr->next = new Node(sum);
        curr =  curr->next;
        sum = 0;
        }
        else {
            sum+=head->data;
        }
        head = head->next;
    }
return ans.next;
    
}
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {3, 4, 52, 21};
    Node* head = nullptr;
    Node* current = nullptr;

    for (int i = 0; i < arr.size(); ++i) {
        if (head == nullptr) {
            head = new Node(arr[i]);
            current = head;
        } else {
            current->next = new Node(arr[i]);
            current = current->next;
        }
    }

    printLL(head);

    return 0;
}
