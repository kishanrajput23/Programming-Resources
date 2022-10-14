// The following program works only if your compiler is C99 compatible.
#include <stdio.h>

// n must be passed before the 2D array
void intake (int m, int n, int arr[][n]){
    	int i, j;
	for (i = 0; i < m; i++){
	for (j = 0; j < n; j++){
		scanf("%d", &arr[i][j]);}}
	for (i = 0; i < m; i++){
	for (j = 0; j < n; j++){
		printf("%d ", arr[j][i]);}}
}

int main()
{
	int m , n;
	printf("enter value of m ");
	scanf("%d",&m);
	printf("enter value of n");
	scanf("%d",&n);
	int arr[m][n];
	intake(m, n, arr);
//	print(m, n, arr);
	return 0;
}
