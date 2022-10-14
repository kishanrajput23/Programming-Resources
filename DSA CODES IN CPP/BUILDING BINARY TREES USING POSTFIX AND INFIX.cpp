#include<bits/stdc++.h>
using namespace std ;
class Node{
    public:
    int data;
    Node*left=NULL;
    Node*right=NULL;
    Node(int val){
        data=val;
    }
};
int search(int inorder[],int start, int end , int val){
    for (int i = start; i<=end; i++) {
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
Node* buildtree(int postorder[], int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int val=postorder[idx];
    idx--;
    Node*curr=new Node(val);
    if(start==end){
        return curr;
    }
    int pos=search(inorder , start,end ,val);
    curr->right=buildtree(postorder,inorder,pos+1,end);
    curr->left=buildtree(postorder,inorder,start,pos-1);
    return curr;
}
void inorderprint(Node*root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root =buildtree(postorder,inorder,0,4);
    inorderprint(root);
}