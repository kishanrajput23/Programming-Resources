#include<bits/stdc++.h> 
using namespace std ;
#define N 5
class MyQueue{
   public:
    int arr [N];
    int f=-1;
    int r=-1;
};
void full(MyQueue* q ){
    if(q->r==N-1){
        cout<<"Queue is full"<<endl;
    }
    else{
        cout<<"Queue is not full"<<endl;
    }
}

void empty(MyQueue* q ){
    if(q->r==q->f==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}
void enqueue(MyQueue*q,int value ){
    if(q->r==N-1){
        cout<<"Queue is full"<<endl;
    }
    else if(q->f==-1&&q->r==-1){
        q->f=q->r=0;
        q->arr[q->r] = value;
        cout<<"Enqueued element is "<<" "<<value<<" "<<endl;
    }
    else {
        q->r++;
        q->arr[q->r] = value;
        cout<<"Enqueued element is "<<" "<<value<<" "<<endl;
    }
}

int dequeue(MyQueue*q){
    int a = -1;
    if(q->r==q->f==-1){
    cout<<"Queue is empty"<<endl;
    }
    else if(q->f==q->r){
        a = q->arr[q->f];
        q->f=q->r=-1;
    }
    else {
        a = q->arr[q->f]; 
        q->f++;
    }
     return a ;
}
void display(MyQueue*q){
    if(q->f==q->r==-1){
        cout<<"Queue is empty"<<endl;
    }
    else {
        for(int i=q->f;i<q->r+1;i++){
            cout<<q->arr[i]<<" ";
        }
    }
}
int main(){
     MyQueue *q = new MyQueue();
     while(true ){
         int QueryType ;
         cout<<"Enter the Query type ";
         cin>>QueryType ;
         if(QueryType==1){
             int a ;
             cout<<"enter the element you wanna enqueue"<<endl;
             cin>>a ;
             enqueue(q,a);
         }
         else if (QueryType==2){
             cout<<dequeue(q)<<endl;
         }
         else if (QueryType==3){
             empty(q);
             cout<<endl;
         }
         else if (QueryType==4){
             full(q);
             cout<<endl;
         }
         else if (QueryType==5){
             display(q);
             cout<<endl;
         }
         else if(QueryType==6) {
             return 0;
         }
     }
    
}