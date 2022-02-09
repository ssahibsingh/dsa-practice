#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insert_at_tail(Node * &head, int val){
    Node * n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}


void insert_at_head(Node * &head, int val){

    Node *n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }

    n->next = head;
    head = n;
}

void search(Node *head, int val){
    Node * temp = head;
    while(temp->next != NULL){
        if(temp->data == val){
            cout<<"Element Found"<<endl;
        }
        temp = temp->next;
    }
    cout<<"Element Not Found"<<endl;
}

void display(Node* head){
    Node *temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

void length(Node* head){
    int length=0;
    if(head == NULL){
        cout<<"Lenght: "<<length<<endl;
    }
    while(head->next != NULL){
        length++;
        head = head->next;
    }
    cout<<"Length: "<<length<<endl;
}
void data_at_nth_node(Node* head, int n){
    int count = 1;
    if(head == NULL){
        return;
    }

    while(head->next != NULL){
        if(count==n){
            cout<<"Data at "<<n<<"th node is "<<head->data<<endl;
        }
        count++;
        head = head->next;
    }
}
int main(){
    Node* head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);

    display(head);
    length(head);
    search(head, 5);
    data_at_nth_node(head, 3);

    return 0;
}