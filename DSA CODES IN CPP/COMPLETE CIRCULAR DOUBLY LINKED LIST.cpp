#include<bits/stdc++.h>
using namespace std ;
class Node {
    public:
    int data ;
    Node* prev;
    Node* next;
}*head,*tail;
void createDCLL(){
    Node*newnode;
    head=NULL;
    int choice =1 ;
    while(choice){
        newnode=new Node();
        cout<<"ENTER DATA";
        cin>>newnode->data;
        if(head==NULL){
            head=tail=newnode;
            head->next=head;
            head->prev=head;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        cout<<"DO YOU WANNA CONTINUE?";
        cin>>choice;
    }
}
void display(){
    Node *temp=head;
    if(head==NULL){
        cout<<"LIST IS EMPTY";
    }
    else {
        while(temp!=tail){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
    }
}

void InsertAtBeginning(){
    Node* newnode=new Node();
    cout<<"ENTER DATA";
    cin>>newnode->data;
    if(head==NULL){
        head = tail=newnode;
        newnode->prev=tail;
        newnode->next =head ;
    }
    else {
        newnode->next=head ;
        head->prev=newnode;
        newnode->prev=tail;
        tail->next=newnode;
        head=newnode;
    }
}
void InsertAtEnd(){
     Node* newnode=new Node();
    cout<<"ENTER DATA";
    cin>>newnode->data;
    if(head==NULL){
        head = tail=newnode;
        newnode->prev=tail;
        newnode->next =head ;
    }
    else {
        newnode->prev=tail;
        tail->next=newnode;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
    
}

void InsertAtPosition(){
    Node*newnode , *temp;
    int pos,i=1;
    temp=head;
    cout<<"ENTER THE POSITION";
    cin>>pos;
    if(pos==1){
        InsertAtBeginning();
    }
    else {
    newnode = new Node();
    cout<<"ENTER DATA";
    cin>>newnode->data;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    }
}
void DeleteFromBeginning(){
    Node *temp;
    temp=head;
    if(head==NULL){
        cout<<"LIST IS EMPTY";
    }
    else if (head->next==head){
        head=tail=NULL;
        free(temp);
    }
    else{
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
}

void DeleteFromEnd(){
     Node *temp;
    temp=tail;
    if(head==NULL){
        cout<<"LIST IS EMPTY";
    }
    else if (head->next==head){
        head=tail=NULL;
        free(temp);
    }
    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }
}
void DeleteFromPosition(){
    Node*temp;
    int pos;
    int i = 1 ;
    temp=head;
    cout<<"Enter position";
    cin>>pos;
    if(pos==1){
        DeleteFromBeginning();
    }
    else {
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(temp->next==head){
            tail=temp->prev;
            free(temp);
        }
        else {
            free(temp);
        }
    }
}
int main(){
    createDCLL();
    display();
    // cout<<endl;
    // InsertAtBeginning();
    // cout<<endl;
    // display();
    // InsertAtEnd();
    // cout<<endl;
    // display();
    // InsertAtPosition();
    // cout<<endl;
    // display();
    // DeleteFromBeginning();
    // cout<<endl;
    // display();
    // DeleteFromEnd();
    //  cout<<endl;
    // display();
    DeleteFromPosition();
    cout<<endl;
    display();
}