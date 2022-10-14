#include <bits/stdc++.h>
using namespace std;
 
// A linked list node
class Node{
public:
    int data;
    Node* next;
};
// void deleteNode(Node** head_ref)
// {
//      Node * ptr = (*head_ref);
//     (*head_ref) = (*head_ref)->next;
//     free(ptr);
// }
// void deleteNode(Node** head_ref, int value)
// {
//       Node *p = (*head_ref);
//      Node *q = (*head_ref)->next;
//     while(q->data!=value && q->next!= NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
    
//     if(q->data == value){
//         p->next = q->next;
//         free(q);
//     } 
// }
void deleteNode(Node** head_ref, int index){
    Node *p = (*head_ref);
     Node *q = (*head_ref)->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
}
// This function prints contents of
// linked list starting from the
// given node
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
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
    push(&head, 1);
    push(&head, 2);
 
    puts("Created Linked List: ");
    printList(head);
 
    deleteNode(&head,2);
    puts("\nLinked List after Deletion of 1st element: ");
     
    printList(head);
     
    return 0;
}