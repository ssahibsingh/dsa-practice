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

void insertAtGivenNode(Node *&head, int key, int nodeNo)
{
    Node *newNode = new Node(key);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    int count = 0;
    Node *temp = head;
    while (count != nodeNo - 1)
    {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node* &head, int key){
    Node *temp = head;
    Node *prev = NULL;

    if(temp!=NULL && temp->data == key){
        head = temp->next;
        delete temp;
        return;
    }
    else{
        while(temp != NULL && temp->data !=key){
            prev = temp;
            temp = temp->next;
        }

        if(temp == NULL)
            return;
        else
            prev->next = temp->next;
    }
}

void deleteFromGivenPosition(Node* &head, int nodeNo){

    Node * temp = head;

    if(temp == NULL)
        return;
    
    int count = 0;

    if(nodeNo == 0){
        head = temp->next;
        free(temp);
        return;
    }
    while(count!=nodeNo-1){
        temp = temp->next;
        count++;
    }
    if(temp == NULL || temp->next == NULL){
        return;
    }
    Node* tempDel = temp->next;
    temp->next = tempDel->next;
    delete tempDel;
}

void reverseLL(Node* &head){
    Node* prevNode = NULL;
    Node* current = head;
    Node* nextNode;

    while(current != NULL){
        nextNode = current->next;
        current->next = prevNode;
        prevNode = current;
        current = nextNode;
    }

    head = prevNode;
}

Node* reverseLL_recursion(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = reverseLL_recursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;

    while( fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


int main()
{
    Node *head = new Node(5);

    insertAtHead(head, 6);
    display(head);

    insertAtTail(head, 8);
    display(head);

    insertAtGivenNode(head, 89, 3);
    display(head);

    // deleteNode(head, 89);
    // display(head);

    deleteFromGivenPosition(head, 5);
    display(head);

    reverseLL(head);
    display(head);

    Node* newHead = reverseLL_recursion(head);
    display(newHead);

    Node* midNode = middleNode(newHead);
    cout<<midNode->data<<endl;
    return 0;
}