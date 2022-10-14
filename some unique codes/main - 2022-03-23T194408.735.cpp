#include<iostream>
using namespace std;
void func(int **arr, int row, int col)        //function prototype
   {
      for (int i=0; i<row; i++)
      {
         for(int j=0 ; j<col; j++)
         {
           cout<<arr[i][j]<<" ";   //printing each element of array
         }
         cout<<"\n";
      }
   }
 int main()
  {
     int row, colm;
     cin >> row >> colm;
     int** arr = new int*[row];                

     for(int i=0; i<row; i++)
        arr[i] = new int[colm];
     
     for(int i=0; i<row; i++)
         for(int j=0; j<colm; j++)
             cin >> arr[i][j];
    
     func(arr, row, colm);                      //function call

     return 0;
   }
