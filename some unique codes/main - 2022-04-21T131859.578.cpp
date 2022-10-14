// calculating factors using o (root n )approach but it is also not much useful while dealing with complex cases ...
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    int ct =  0;
    int sum = 0;
    for (int i = 1; i*i < n; i++) {
        if(n%i==0){
            cout<<i<<" "<<n/i<<endl;
            ct+=1;
            sum+=i;
            if(n/i!=i){
                sum+=n/i;
                ct+=1;
            }
        }
    }
     cout<<ct<<" "<<sum<<endl;
     
}