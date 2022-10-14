
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void copyselc(ifstream& fp, ofstream& fp1)
{
    string line;
    while(getline(fp,line))
    {
        if(line[0]=='#')
        {
            fp1<<line<<endl;
        }
    }
}

void checksize(ifstream& fp1,ifstream& fp2)
{
    int c1=0,c2=0;
    string line;
    while(getline(fp1,line))
    {
        c1+=line.size();
    }
    while(getline(fp2,line))
    {
        c2+=line.size();
    }
    if(c1==c2)
    {
        cout<<"Both Files are of the same size"<<endl;
    }
    else
    {
        cout<<"Size of the files is not same"<<endl;
    }
}

void dispNumNames(ifstream& fp)
{
    string line;
    while(getline(fp,line))
    {
        for(int i=0;i<line.size();i++)
        {
            if(line[i]>='1'&&line[i]<='5')
            {
                switch(line[i])
                {
                    case '1':
                        cout<<"One"<<endl;
                        break;
                    case '2':
                        cout<<"Two"<<endl;
                        break;
                    case '3':
                        cout<<"Three"<<endl;
                        break;
                    case '4':
                        cout<<"Four"<<endl;
                        break;
                    case '5':
                        cout<<"Five"<<endl;
                        break;
                }
            }
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the number of lines in the file: ";
    cin>>size;
    ofstream fp3("File1.txt");
    while(size--)
    {
        string line;
        cin>>line;
        fp3<<line<<endl;
    }
    ifstream fp("File1.txt");
    ofstream fp1("File2.txt");
    ifstream fp2("File2.txt");
    copyselc(fp,fp1);
    checksize(fp2,fp);
    dispNumNames(fp2);
    return 0;
}
 
