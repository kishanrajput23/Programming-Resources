#include <bits/stdc++.h>
using namespace std;
int binExpRecur(int a , int b ){
    if(b==0) return 1 ;
    int res = binExpRecur(a,b/2);
    if(b&1){
        return a *res*res*1LL;
    }
    else {
        return res*res*1LL;
    }
}
int main()
{
    int a = 2 ; int b = 13 ;
    cout<<pow(2,13)<<endl;
    cout<<binExpRecur(a,b)<<endl;
}
