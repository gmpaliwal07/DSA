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
Node* oddEvenList(Node* head) {
        if(head == nullptr || head->next == nullptr) return head;
        while (head != nullptr)
        {
            
        }
        
    }
int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
vector<int> arr = { 1,2,3,4,5};
Node* head = vectorToLL(arr);
return 0;
}