#include<bits/stdc++.h>
using namespace std;

void swapp(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void bubblesort(int arr[], int size)
{
	for(int i=0; i<size-1; i++)//i indicates max number of passes
	{
		int flag=0;
		for(int j=0; j<size-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swapp(arr[j],arr[j+1]);
				flag=1;
			}

		}
		if(flag==0)
			break;
	}
	cout<<"After bubble sorting "<<endl;
}

void printsorted(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

int main()
{
	int arr[]={3,6,2,1,5,8,0,6};
	printsorted(arr,8);
	bubblesort(arr,8);
	printsorted(arr,8);
	return 0;
}