#include<bits/stdc++.h>
using namespace std ;
class Node  {
    public:
    int data ;
    Node * next;
}*tail;
void createCLL(){
     int choice =1;
     tail=NULL;
    while(choice){
    Node* newnode= new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->next=NULL;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
    cout<<"DO YOU WANNA CONTINUE";
    cin>>choice;
    }
}
void displayCLL(){
    Node*temp=tail->next;
    while(temp->next!=tail->next){
       cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
void count(){
    int count =0;
    Node*temp=tail->next;
    while(temp->next!=tail->next){
       count++;
        temp=temp->next;
    }
    cout<<count+1;
}
void InsertAtBeginning(){
    Node *newnode =new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->next=NULL;
    if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else{
        newnode->next=tail->next;
        tail->next=newnode;
    }
}

void InsertAtEnd(){
    Node *newnode =new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->next=NULL;
     if(tail==NULL){
        tail=newnode;
        tail->next=newnode;
    }
    else {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
}

void InsertAtPosition(){
    cout<<"ENTER THE POSITION";
    int pos;
    cin>>pos;
    Node* temp;
    int i =1 ;
    if(pos==1){
        InsertAtBeginning();
    }
    else {
    Node *newnode =new Node(); 
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->next=NULL;
    temp=tail->next;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    }
}
void DeleteFromBeginning(){
    Node *temp;
    temp=tail->next;
    if(tail==NULL){
        cout<<"LIST IS EMPTY";
    }
    else if(temp->next==temp){
        tail=NULL;
        free(temp);
    }
    else {
        tail->next=temp->next;
        free(temp);
    }
}
void DeleteFromEnd(){
    Node*current,*previous;
    current=tail->next;
     if(tail==NULL){
        cout<<"LIST IS EMPTY";
    }
    else if (current->next==current){
        tail=NULL;
        free(current);
    }
    else {
        while(current->next!=tail->next){
            previous=current;
            current=current->next;
        }
        previous->next=tail->next;
        tail=previous;
        free(current);
    }
}
void DeleteFromPosition(){
    Node*current,*nextnode;
    int pos,i=1;
    current=tail->next;
    cout<<"ENTER THE POSITION";
    cin>>pos;
    if(pos==1) {
        DeleteFromBeginning();
    }
    else{
        while(i<pos-1){
            current=current->next;
            i++;
        }
        nextnode=current->next;
        current->next=nextnode->next;
        nextnode->next=NULL;
        free(nextnode);
    }
}
void reverse (){
    Node*current , *prev, *nextnode;
    current=tail->next;
    nextnode=current->next;
    if(tail==0){
        cout<<"LINKED LIST IS EMPTY";
    }
    else {
        while(current!=tail){
            prev=current;
            current=nextnode;
            nextnode=current->next;
            current->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
    }
}
int main(){
    createCLL();
    displayCLL();
    // cout<<endl;
    // InsertAtBeginning();
    // cout<<endl;
    // displayCLL();
    // InsertAtEnd();
    // cout<<endl;
    // displayCLL();
    // InsertAtPosition();
    // cout<<endl;
    // displayCLL();
    // count();
    // DeleteFromPosition();
    reverse();
    cout<<endl;
    displayCLL();
}