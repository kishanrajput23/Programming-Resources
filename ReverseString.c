#include<stdio.h>

int main(){

    int i,j;
	char str[10];
	printf("Enter the string: \n");
	scanf ("%s", &str);
	for(j = 0; str[j] != '\0'; j++);
	for(i = 0, j = j-1; i < j; j--, i++){
		str[i]=str[i]^str[j];];
		str[i]=str[i]^str[j];
	}
	printf("The reversed string is: ");
	puts(str);
    return 0;
}
