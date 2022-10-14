#include<bits/stdc++.h>
using namespace std;

 
void
printArray (int *A, int n)
{
  
for (int i = 0; i < n; i++)
    
    {
      
cout << A[i] << endl;
    
} 
cout << endl;

} 
 
void

bubbleSortAdaptive (int *A, int n)
{
  
int temp;
  
int isSorted = 0;
  
for (int i = 0; i < n - 1; i++)	// For number of pass
    {
      
cout << "WORKING ON PASS NUMBER " << " " << i + 1 << endl;;
      
isSorted = 1;
      
for (int j = 0; j < n - 1 - i; j++)	// For comparison in each pass
	{
	  
if (A[j] > A[j + 1])
	    {
	      
temp = A[j];
	      
A[j] = A[j + 1];
	      
A[j + 1] = temp;
	      
isSorted = 0;
	    
}
	
}
      
if (isSorted)
	{
	  
return;
	
}
    
}

}


 
int
main ()
{
  
    // int A[] = {12, 54, 65, 7, 23, 9};
  int A[] = { 1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987 };
  
    // int A[] = {1, 2, 3, 4, 5, 6};
  int n = 11;
  
printArray (A, n);		// Printing the array before sorting
  bubbleSortAdaptive (A, n);	// Function to sort the array
  printArray (A, n);		// Printing the array before sorting
  return 0;

}


