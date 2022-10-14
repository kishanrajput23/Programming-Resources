#include <bits/stdc++.h>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
};
void printList(Node* n)
{
    Node *ptr = n;
    
    do{
        cout << n->data << " ";
        n = n->next;
    }while(ptr!=n);
}
void InsertAtFirst(Node** head_ref, int data ){
    Node *ptr = new Node();
    ptr->data= data;
    Node * p = (*head_ref)->next;
    while(p->next != (*head_ref)){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = (*head_ref);
    (*head_ref) = ptr;
}
int main()
{
  Node* head = NULL;   
  Node* second = NULL;
  Node* third = NULL;
  // only pointers has been created as of now ....
  head = new Node();
  second= new Node();
  third = new Node();
  // memory has been allocated dynamically from heap...
   /* Three blocks have been allocated dynamically. 
    We have pointers to these three blocks as head, 
    second and third     
    head         second         third 
        |             |             | 
        |             |             | 
    +---+-----+     +----+----+     +----+----+ 
    | # | # |     | # | # |     | # | # | 
    +---+-----+     +----+----+     +----+----+ 
      
# represents any random value. 
Data is random because we havenâ€™t assigned 
anything yet */
 head->data = 1; // assign data in first node
    head->next = second; // Link first node with
    // the second node
  
    /* data has been assigned to the data part of first 
    block (block pointed by the head). And next 
    pointer of the first block points to second. 
    So they both are linked. 
  
    head         second         third 
        |             |             | 
        |             |             | 
    +---+---+     +----+----+     +-----+----+ 
    | 1 | o----->| # | # |     | # | # | 
    +---+---+     +----+----+     +-----+----+     
*/
  
    // assign data to second node
    second->data = 2;
  
    // Link second node with the third node
    second->next = third;
  
    /* data has been assigned to the data part of the second 
    block (block pointed by second). And next 
    pointer of the second block points to the third 
    block. So all three blocks are linked. 
      
    head         second         third 
        |             |             | 
        |             |             | 
    +---+---+     +---+---+     +----+----+ 
    | 1 | o----->| 2 | o-----> | # | # | 
    +---+---+     +---+---+     +----+----+     */
  
    third->data = 3; // assign data to third node
    third->next = head;
  
    /* data has been assigned to the data part of the third 
    block (block pointed by third). And next pointer 
    of the third block is made NULL to indicate 
    that the linked list is terminated here. 
  
    We have the linked list ready. 
  
        head     
            | 
            | 
        +---+---+     +---+---+     +----+------+ 
        | 1 | o----->| 2 | o-----> | 3 | o---------:-
      ->  +---+---+     +---+---+     +----+------+    : 
     :
      -----------------------------------------------
      
    Note that only the head is sufficient to represent 
    the whole list. We can traverse the complete 
    list by following the next pointers. */
   printList(head);
   InsertAtFirst(&head , 45);
   cout<<endl;
    printList(head);
    return 0;
}
