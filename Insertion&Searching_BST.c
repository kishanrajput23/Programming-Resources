#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node * createNode(int value)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=value;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node * search(struct node *root,int key)
{
    while(root!=NULL)
    {
        if(root->data ==key)
        {
            return root;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
}
void insert(struct node *root, int key)
{
    struct node *prev=NULL;
    while(root!=NULL)
    {
        prev =root;
        if(key==root->data)
        {
            printf("The element %d cannot be inserted in the Binary Search Tree\n",key);
            return ;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node *new=createNode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }else{
        prev->right=new;
    }
    
}
int main()
{
    struct node *p1=createNode(5);
    struct node *p2=createNode(3);
    struct node *p3=createNode(6);
    struct node *p4=createNode(1);
    struct node *p5=createNode(4);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;

printf("Enter the element to be inserted:\n");
int num;
scanf("%d",&num);
    insert(p1,num);
    printf("Enter the element to be searched:\n");
    int e;
    scanf("%d",&e);
    struct node *x= search(p1,e);
    if(x!=NULL)
    {
        printf("The element %d has been found in the Binary Search Tree\n",x->data);
    }else{
        printf("The element is not found in the Binary Search Tree\n");
    }
   

    return 0;
}