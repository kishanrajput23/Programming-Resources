#include<stdio.h>
int main(void)
{
int n,d,a,sum=0; 
printf(“\n Enter the number :”);
scanf(“%d”,&n);
a=n; //Making copy of the original number because of while loop
while(a>0) 
{
d=a%10;
sum=sum+d;
a=a/10;
}
if(n%sum==0) //Checking if the remainder is zero or not
printf(“\n The number is Harshard Number “);
else
printf(“\n The number is not a Harshard Number “);
getch();
return 0;
