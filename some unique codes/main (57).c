#include<stdio.h>
int smaller(int a , int b ){
    int c = (a<b?a:b);
    return c ;
}
int main(){
    int a , b ;
    printf(" enter the values of a and b ");
    scanf("%d%d",&a,&b);
    int z = smaller(a,b);
    printf("%d",z);
}