// tower of hanoi 
//even lord brahma used to code .....



#include<bits/stdc++.h>
using namespace std;
void solve (int s , int d , int h, int n ){
    if(n==1){
        cout<<"moving plate"<<n<<" "<<"from"<<s<<" "<<"to"<<d<<endl;
        return;
    }
    solve(s,h,d,n-1);
     cout<<"moving plate"<<n<<" "<<"from"<<s<<" "<<"to"<<d<<endl;
    solve(h,d,s,n-1);
    
}
int main(){
    int n ;
    cout<<"enter number of plates?";
    cin>>n;
    int s, h , d;
    s=1,h=2,d=3;
    solve(s,d,h,n);
}