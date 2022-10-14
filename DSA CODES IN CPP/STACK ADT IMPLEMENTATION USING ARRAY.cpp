// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    int arr[1000];
    int top = -1;
    int pop();
    void push(int);
};
void MyStack :: push(int x)
{
     if(1000-top>1){
       top++;
       arr[top]=x;
       cout<<"successfully pushed "<<" "<<x<<" "<<"to the stack";
}
}

int MyStack :: pop()
{
    if(top>=0){
     int ans =arr[top];
       top--;
       cout<<"successfully pooped "<<" "<<ans<<" "<<"from stack"<<endl;
       return ans ;
    }
       else{
           return -1;
       }
}

int Empty(MyStack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 int full(MyStack* ptr ){
     if(ptr->top==999){
         return 1 ;
     }
     else {
         return 0;
     }
 }
 int StackTop(MyStack* ptr ){
     return ptr->arr[ptr->top];
 }
 
 int StackBottom(MyStack *ptr){
     return ptr->arr[0];
 }
int peek(MyStack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        cout<<"Not a valid position for the stack\n";
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main()
{
       MyStack *sq = new MyStack();
      while(true){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }
        else if(QueryType==2)
        {
            cout<<sq->pop()<<" ";
        }
        else if (QueryType==3){
             int a = Empty(sq);
           if(a==1){
          cout<<"stack is empty"<<endl;
      }
      else {
          cout<<"stack is not empty"<<endl;
      }
        }
        else if ( QueryType==4 ){
            int b =full(sq);
            if(b==1){
                cout<<"Stack is full "<<endl;
            }
            else {
          cout<<"Stack is not full"<<endl;       
        }
        }
        else if(QueryType==5){
            for (int j = 1; j <= sq->top + 1; j++)
    {
        cout<<"the value at position"<<" "<<j<<" "<<"is "<<peek(sq,j)<<endl;
    }
        }
        else if (QueryType==6){
            cout<<StackTop(sq)<<endl;
        }
        else if (QueryType==7){
            cout<<StackBottom(sq)<<endl;
        }
        else if (QueryType==8){
            return 0;
        }
        cout<<endl;
        }
}
