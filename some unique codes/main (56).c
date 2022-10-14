#include<stdio.h>
int greater(int a , int b ){
    int c = (a>b?a:b);
    return c ;
}
int main(){
    int a , b ;
    printf(" enter the values of a and b ");
    scanf("%d%d",&a,&b);
    int z = greater(a,b);
    printf("%d",z);
}