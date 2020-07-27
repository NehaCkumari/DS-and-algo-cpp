#include<iostream>
using namespace std;
void swap(int *value1, int *value2)
{
	int temp;
	temp=*value1;
	*value1=*value2;
	*value2=temp;
}

void selectionsort(int arr[])
{
	int min;
	for(int i=0; i<5; i++)
	{
		min=i;
		for(int j=i+1; j<5; j++)
		{
			if(arr[j]<arr[min])
			{
				swap(&arr[j],&arr[min]);
			}
			
		}
	}

}



int main()
{
	int myarr[5]={12,4,56,2,6};
	cout<<"Before selection sort"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"->"<<myarr[i];
	}
	cout<<endl;
	selectionsort(myarr);
	Cout<<"After selection sort"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"->"<<myarr[i];
	}
	cout<<endl;	
	
	return 0;
}