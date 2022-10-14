#include <bits/stdc++.h>
using namespace std;
 
// A linked list node
class Node{
public:
    int data;
    Node* next;
};
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
void length(Node* node ){
     int count =0;
     while (node != NULL)
    {
        count++;
        node = node->next;
    }
    cout<<count<<endl;
}
 void reverse(Node** head_ref){
     Node*prevnode,*currentnode,*nextnode;
     prevnode=NULL;
     currentnode=nextnode=*head_ref;
     while(nextnode!=0){
         nextnode=nextnode->next;
         currentnode->next=prevnode;
         prevnode=currentnode;
         currentnode=nextnode;
     }
     *head_ref=prevnode;
 }
 void Reverse(Node**head,Node*cur){
     if(!cur||!cur->next){
         *head=cur;
         return;
     }
      Reverse(head,cur->next);
     cur->next->next=cur;
     cur->next=NULL;
 }
 void Reverseprint(Node* ptr){
     if(ptr==NULL){
         return;
     }
     Reverseprint(ptr->next);
     cout<<ptr->data<<" ";
 }
 void print(Node* ptr){
     if(ptr==NULL){
         return;
     }
     cout<<ptr->data<<" ";
     print(ptr->next);
 }
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 int main(){
    Node* head = NULL;
 
    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
 
    puts("Created Linked List: ");
    printList(head);
    cout<<endl;
    Reverseprint(head);
    cout<<endl;
    print(head);
    cout<<endl;
    length(head);
    Reverse(&head,head);
    printList(head);
    
}