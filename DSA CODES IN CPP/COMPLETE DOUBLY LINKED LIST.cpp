#include<bits/stdc++.h>
using namespace std ;
class Node  {
    public:
    int data ;
    Node* prev;
    Node * next;
}*tail;
void create(Node**head_ref){
    int choice =1;
    while(choice){
    Node* newnode= new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(*head_ref==NULL){
        *head_ref=tail=newnode;
    }
    else {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    cout<<"DO YOU WANNA CONTINUE";
    cin>>choice;
    }
}
void display(Node* node )
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

void InsertAtBeginning(Node**head_ref){
    Node *newnode=new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    (*head_ref)->prev=newnode ;
    newnode->next = *head_ref;
    *head_ref= newnode;
}
void InsertAtLast(Node**head_ref){
    Node *newnode=new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void InsertAtPosition(Node**head_ref, int index){
    int i =1 ;
    if(index==1){
        InsertAtBeginning(&(*head_ref));
    }
    else{
    Node *newnode=new Node();
    Node*temp=*head_ref;
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    while(i<index-1){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
    }
}
void InsertAfterPosition(Node**head_ref, int index){
    int i =1 ;
    Node *newnode=new Node();
    Node*temp=*head_ref;
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->prev=NULL;
    newnode->next=NULL;
    while(i<index){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
}
void DeleteFromBeginning(Node**head_ref){
        Node* temp=*head_ref;
        *head_ref=(*head_ref)->next;
        (*head_ref)->prev=NULL;
        temp->next==NULL;
        free(temp);
}
void DeleteFromEnd(Node**head_ref){
    Node*temp=tail;
    tail->prev->next=NULL;
    tail=tail->prev;
    free(temp);
}
void DeleteFromPosition(Node**head_ref, int pos){
    Node*temp=*head_ref;
    int i=1 ;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
void Reverse(Node**head_ref){
    Node *current , *nextnode ;
    current=*head_ref;
    while(current!=NULL){
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current =nextnode ;
    }
    current = *head_ref ;
    *head_ref = tail;
    tail=current ;
}
int main(){
    Node*head = NULL;
    create(&head);
    display(head);
    cout<<endl;
    // InsertAtBeginning(&head);
    // display(head);
    // InsertAtLast(&head);
    // cout<<endl;
    // display(head);
    // InsertAtPosition(&head,2);
    // cout<<endl;
    // display(head);
    // InsertAfterPosition(&head,2);
    // cout<<endl;
    // display(head);
    // DeleteFromBeginning(&head);
    // cout<<endl;
    // display(head);
    // DeleteFromEnd(&head);
    // cout<<endl;
    // display(head);
    // DeleteFromPosition(&head,2);
    // cout<<endl;
    // display(head);
    Reverse(&head);
    display(head);
}