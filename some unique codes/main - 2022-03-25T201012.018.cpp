#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin; // creating an object of class ofstream .
    fin.open("myfile.txt",ios::app); //opening up file by default it opens in read mode if not mentioned 
    int pos;
    cout<<fin.tellg();
    cout<<endl<<(char)fin.get();
    cout<<endl<<fin.tellg();
    fin.seekg(6);
    cout<<endl<<fin.tellg();
    fin.seekg(-2,ios_base::end);
    cout<<endl<<(char)fin.get();
}