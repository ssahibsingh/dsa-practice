#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout <<"NULL"<< endl;
}

void insertAtHead(Node *&head, int key)
{
    Node *newNode = new Node(key);

    if (head == NULL)
    {
        head = newNode;
        // return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

Node* sum(Node* a, Node*b){
    int carry = 0;
    Node* p1 = a;
    Node* p2 = b;
    Node* result;
    int temp;

    temp = p1->data+p2->data + carry;
    if(temp>9)
        carry = 1;
    result->data = temp%10;
    cout<<result->data;
    if(p1 == NULL || p2 == NULL || carry){
        if(p1->next == NULL){
            p1->next = new Node(0);
        }
        if(p2->next == NULL){
            p2->next = new Node(0);
        }
        
        result->next = sum(a->next, b->next);
    }
    
    return result;
}

int main(){
    Node* head1 = new Node(3);
    Node* head2 = new Node(4);

    insertAtHead(head1, 4);
    insertAtHead(head1, 2);

    insertAtHead(head2, 6);
    insertAtHead(head2, 5);

    Node* result = sum(head1, head2);
    display(result);
    return 0;
}