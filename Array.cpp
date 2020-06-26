#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={11,12,13,14,15};
	int n=5;
	int j=n;
	int k=2;
	const int item=20;
	//Traverse
	cout<<"Traverse: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<i<<" : "<<arr[i]<<"  ";
	}
	cout<<endl;
	//Insertion
	cout<<"Insertion at index 2 with value 20: "<<endl;
	//insert 19 at index 2
	while(j>k)
	{
		arr[j]=arr[j-1];
		j=j-1;
	}
	arr[j]=item;
	n=n+1;
	for(int i=0; i<n; i++)
	{
		cout<<i<<" : "<<arr[i]<<"  ";
	}
	cout<<endl;	

	//deletion
	cout<<"Delete at index 2 with value 20: "<<endl;
	while(j<n-1)
	{
		arr[j]=arr[j+1];
		j=j+1;
	}
	n=n-1;
	for(int i=0; i<n; i++)
	{
		cout<<i<<" : "<<arr[i]<<"  ";
	}
	cout<<endl;		
	//search&update

	return 0;
}