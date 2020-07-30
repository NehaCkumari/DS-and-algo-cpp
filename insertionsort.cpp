#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[], int size)
{
	int temp,j;
	for(int i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	cout<<"After insertion sort\n";
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
	insertionsort(arr,8);
	printsorted(arr,8);
	return 0;
}