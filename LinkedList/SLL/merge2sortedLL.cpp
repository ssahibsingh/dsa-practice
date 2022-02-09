#include <bits/stdc++.h>
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
    cout << "NULL" << endl;
}

void insertAtTail(Node *&head, int key)
{
    Node *newNode = new Node(key);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

Node *merge(Node *head1, Node *head2)
{
    Node* p1 = head1;
    Node* p2 = head2;
    Node* dummy = new Node(-1);
    Node* p3 = dummy;

    while(p1!=NULL && p2 !=NULL){
        if(p1->data<p2->data){
            p3->next = p1;
            p1 = p1->next;
        }
        else{
            p3->next = p2;
            p2 = p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL){
        p3->next = p1;
        p1 = p1->next;
        p3=p3->next;

    }
    while(p2!=NULL){
        p3->next = p2;
        p2 = p2->next;
        p3=p3->next;
    }

    return dummy->next;
}

int main()
{
    Node *head1 = new Node(3);
    Node *head2 = new Node(1);

    insertAtTail(head1, 7);
    insertAtTail(head1, 10);

    insertAtTail(head2, 2);
    insertAtTail(head2, 5);
    insertAtTail(head2, 8);
    insertAtTail(head2, 10);


    Node* head = merge(head1, head2);
    display(head);

    return 0;
}