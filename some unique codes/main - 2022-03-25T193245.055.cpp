#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout; // creating an object of class ofstream .
    fout.open("myfile.txt"); //opening up file by default it opens in read mode if not mentioned 
    fout<<"hello"; // sending streams of hello in form of 0 and 1 to the file 
}