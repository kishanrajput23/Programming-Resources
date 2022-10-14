#include<bits/stdc++.h>
using namespace std ;
#define N 5
int Queue[5];
int front =-1 ;
int rear = -1;
void enqueue (int x ){
    if (((rear+1)%N)==front){
        cout<<"Queue is full"<<endl;
    }
    else if (front==-1&&rear==-1){
        front=rear=0;
        Queue[rear]=x;
        cout<<"enqueued" <<" "<<x<<"into Queue"<<endl;
    }
    else {
        rear=(rear+1)%N;
        Queue[rear]=x;
        cout<<"enqueued" <<" "<<x<<"into Queue"<<endl;
    }
}

void dequeue(){
    if(front==-1&&rear==-1){
        cout<<"Queue is empty"<<endl;
    }
    else if (front == rear){
        cout<<Queue[front]<<endl;
        front=rear=-1;
    }
    else {
         cout<<Queue[front]<<endl;
         front=(front+1)%N;
    }
}

void display(){
    int i = front;
    if(front==-1&&rear==-1){
        cout<<"Queue is empty"<<endl;
    }
    else {
        cout<<"Queue data are as follows:"<<endl;
        while(i!=rear){
            cout<<Queue[i]<<" ";
            i=(i+1)%N;
        }
        cout<<Queue[rear]<<endl;
    }
}

int main(){
    enqueue(2);
    enqueue(2);
    enqueue(2);
    enqueue(2);
    enqueue(2);
    display();
    dequeue();
    dequeue();
    enqueue(4);
    enqueue(5);
    display();
}