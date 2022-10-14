#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin; // creating an object of class ofstream .
    fin.open("myfile.txt"); //opening up file by default it opens in read mode if not mentioned 
    char ch;
    ch=fin.get();
    while(!fin.eof()){
        cout<<ch;
        ch=fin.get();
    }
   fin.close();
}