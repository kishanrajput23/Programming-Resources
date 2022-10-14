#include<bits/stdc++.h>
using namespace std ;
class Node {
    public:
    int data ;
    Node *left;
    Node*right;
};
Node* create(){
    int x ;
    Node*newnode=new Node();
    cout<<"Enter data & -1 for no node ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    cout<<"ENTER LEFT CHILD OF NODE";
    cout<<endl;
    newnode->left=create();
    cout<<"ENTER RIGHT CHILD OF NODE";
    cout<<endl;
    newnode->right=create();
    return newnode;
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(Node* root){
     if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
   Node *root=NULL;
   root=create();
   preorder(root);
   postorder(root);
   inorder(root);
}