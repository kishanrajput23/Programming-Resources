#include<bits/stdc++.h>
using namespace std ;
class Node{
   
   public:
   int data;
    Node *next;
};

void enqueue(Node**r , Node** f ,int val){
    Node *n = new Node();
    if(n==NULL){
        cout<<"Queue is Full";
    }
    else{
        n->data = val;
        n->next = NULL;
        if(*f==NULL){
            *f=*r=n;
        }
        else{
        (*r)->next = n;
            *r=n;
        }
    }
}
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void dequeue(Node**r , Node** f)
{
    int val = -1;
    struct Node *ptr = *f;
    if(*f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        *f = (*f)->next;
        val = ptr->data;
        cout<<"Successfully dequeued "<<" "<<val<<"from queue"<<endl;
        free(ptr);
    }
}
int main(){
    Node *r=NULL;
    Node *f=NULL;
    enqueue(&r,&f,34);
    enqueue(&r,&f,35);
    linkedListTraversal(f);
    dequeue(&r,&f);
    linkedListTraversal(f);
}

