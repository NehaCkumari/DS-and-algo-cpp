//pointer
#include<iostream>
using namespace std;
int main()
{
	int var1=12;
	cout<<var1<<endl;
	cout<<&var1<<endl;
	int* p;
	p=&var1;
	cout<<p<<endl;
	cout<<*p<<endl;

	int arr[4]={2,3,6,8};
	cout<<arr<<" "<<arr+2<<endl;
	cout<<*arr<<" "<<*(arr+2)<<endl;
	cout<<arr[1];

	int a[2][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"->"<<a[i][j];
		}
	}

	cout<<endl<<a<<" "<<*a<<" "<<**a;	
	return 0;
}
