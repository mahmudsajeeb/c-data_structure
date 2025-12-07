#include<bits/stdc++.h>
using namespace std;
 
#include<bits/stdc++.h>
using namespace std;

 

 class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this ->val = val;
        this->next =NULL;
    }
 };
 

void print_linked_list(Node* &head){
    Node* tmp = head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    
    
}
void delete_Node(Node* head, int pos){
    Node *tmp= head;
    for(int i= 1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
 

int main()
 
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head ->next=a;
    a->next =b;
    b->next =c;
    c->next =d;

    print_linked_list(head);
    int pos;
    cin>>pos;
    
    delete_Node(head,pos);
    print_linked_list(head);
    return 0;
}