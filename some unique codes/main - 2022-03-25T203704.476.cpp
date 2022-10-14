#include<iostream>
#include<fstream>
using namespace std;
int main(){
  char arr[100];
  cout<<" enter your name and age"<<endl;
  cin.getline(arr,100);
  ofstream myfile("myfile.txt",ios::out);
  myfile<<arr;
  myfile.close();
  cout<<"File write operation performed successfully"<<endl;
  cout<<"READING FROM FILE OPERATION STARTED"<<endl;
  char arr1[100];
  ifstream obj("myfile.txt");
  obj.getline(arr1,100);
  cout<<"array content :"<<arr1<<endl;
  cout<<"File read operation completed"<<endl;
}