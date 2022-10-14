#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("myfile.txt",ios::ate|ios::app);
  cout<<fout.tellp()<<endl;
  fout<<"ABCDEFG";
  cout<<fout.tellp()<<endl;
  fout.close();
}