#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout; // creating an object of class ofstream .
    fout.open("myfile.txt",ios::app); //opening up file by default it opens in read mode if not mentioned 
    char ch;
    int pos;
    pos=fout.tellp();
    cout<<pos<<endl;
    fout<<"abhishek";
     pos=fout.tellp();
    cout<<pos<<endl;
    
}