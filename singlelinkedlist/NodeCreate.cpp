#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }    
};

void printlinkedlist(Node* head){
    Node* tmp = head;
    while(tmp !=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void insertAtTail(Node *&head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insertAtHead(Node *&head,int val){
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}

void insertAtPosition(Node *&head,int val,int pos){
    if(pos==1){
        insertAtHead(head,val);
        return ;
    }
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=1; i<pos-1; i++){
        if(tmp== NULL){
            cout<<"Invalid Position"<<endl;
            return;
        }
        tmp= tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;

    insertAtTail(head, 50);
    insertAtHead(head, 18);

    printlinkedlist(head);  // Output: 18 10 20 30 40 50

    insertAtPosition(head, 488, 3);

    printlinkedlist(head);  // Output: 18 10 488 20 30 40 50

    return 0;
}
