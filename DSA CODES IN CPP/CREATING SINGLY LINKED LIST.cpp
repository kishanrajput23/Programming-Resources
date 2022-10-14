#include<bits/stdc++.h>
using namespace std ;
class Node  {
    public:
    int data ;
    Node * next;
};
void create(Node**head_ref){
    int choice =1;
    Node* temp;
    while(choice){
    Node* newnode= new Node();
    cout<<"ENTER THE DATA YOU WANNA INSERT";
    cin>>newnode->data;
    newnode->next=NULL;
    if(*head_ref==NULL){
        *head_ref=temp=newnode;
    }
    else {
        temp->next=newnode;
        temp=newnode;
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

int main(){
    Node*head = NULL;
    create(&head);
    display(head);
}