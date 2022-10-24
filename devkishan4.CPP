#include<iostream>

using namespace std;

int main(){

	int ar[20],i,n,a,j=0;	cout<<"Enter number of elements you want to enter(max = 20) :"<<endl;

	cin>>n;

	cout<<"Enter elements : "<<endl;

	for(i=0;i<n;i++){

		cin>>ar[i];

	}

	cout<<"Enter element you want to search : "<<endl;

	cin>>a;

	cout<<endl;

	for(i=0;i<n;i++){

		if(ar[i]==a){

			cout<<"Element found at index "<<i;

			j++;

			break;

		}

	}

	if(j==0){

		cout<<"Element not found";

	}

}
