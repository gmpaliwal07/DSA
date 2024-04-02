#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *reverseLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *newHead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *newHead = reverseLinkedList(slow->next);

    Node *first = head;
    Node *second = newHead;

    while (second != NULL)
    {
        if (first->data != second->data)
        {
            reverseLinkedList(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }

    reverseLinkedList(newHead);
    return true;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    Node *head = nullptr;
    Node *tail = nullptr;
    int data;
    cin >> data;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }

    if (isPalindrome(head))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    Node *temp;
    while (head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    // memory clean

    return 0;
}
