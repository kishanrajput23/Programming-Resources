#include<bits/stdc++.h>
using namespace std ;
class Node
{
	public:
	int data;
	Node *next;
};

/* Given a reference (pointer to pointer)
to the head of a list and an int, inserts
a new node on the front of the list. */
void push(Node** head_ref, int new_data)
{
	/* 1. allocate node */
	Node* new_node = new Node();
    if(new_node==NULL){
        cout<<"STACK OVERFLOW";
    }
	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref) = new_node;
}

void traversal(Node* node)
{
    while(node!=NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
void pop(Node** head_ref)
{
     Node * ptr = (*head_ref);
    (*head_ref) = (*head_ref)->next;
    free(ptr);
}
 void empty(Node* top){
 if (top==NULL){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty";
    }
}

void full (Node * top){
    Node *p = new Node();
    if(p==NULL){
        cout<<"Stack is full";
    }
    else{
        cout<<"stack is not full";
    }
}

int peek(int pos, Node *s){
    Node *ptr = s ;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int stackTop(Node* top){
    return top->data;
}

int stackBottom(Node*top){
    Node* k =top;
    while(k->next!=NULL){
        k=k->next;
    }
    return k->data;
}
 int main(){
  Node * s = NULL;
  push(&s,12);
  push(&s,22);
  push(&s,32);
  push(&s,42);
  traversal(s);
  cout<<endl;
  pop(&s);
  traversal(s);
  cout<<endl;
  empty(s);
  cout<<endl;
  full(s);
  cout<<endl;
   for (int i = 1; i <= 3; i++)
    {
        cout<<"Value at position"<<" "<<i<<" "<<"is : "<< peek(i,s)<<endl;
    }
    cout<<stackTop(s)<<endl;
    cout<<stackBottom(s)<<endl;   
 }
 
