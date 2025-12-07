#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev =NULL;
    };
};

void normal_print(Node *head){
    Node * tmp = head;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout <<endl;
    
}

void print_revers(Node *tail){
    Node * tmp = tail;
    while (tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
     cout <<endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b; 
    //connection 
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    normal_print(head);

    print_revers(tail);
    return 0;
}