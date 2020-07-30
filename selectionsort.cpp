#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void selectionsort(int arr[], int size)
{
	int i=0,j_min;
	while(i<size-1)
	{
		j_min=i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[j]<arr[j_min])//compare with min_index values
				j_min=j;
		}
		swap(arr[i],arr[j_min]);
		i++;
	}
	cout<<"After selection sort \n";
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
	selectionsort(arr,8);
	printsorted(arr,8);
	return 0;
}