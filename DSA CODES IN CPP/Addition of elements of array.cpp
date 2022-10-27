#include<stdio.h>
int main()
{
		int a[5],i,j=0;
		printf("Enter five values:");
		for(i=0;i<5;i++)
		{
				scanf("%d",&a[i]);
		}
				for(i=0;i<5;i++)
		{
			j=j+a[i];
			printf("%d",j);	
		}	
		return 0;
}

