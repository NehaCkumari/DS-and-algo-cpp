#include<bits/stdc++.h>
using namespace std;
const int row=3, column=3;
// 0 1 2
// 2 1 0
// 0 0 1
bool ispresent(int i, int j)
{
	if (i>=0 && i<3  && j>=0 && j<3)
		return true;
	return false;
}
int rottingtime(int arr[3][3])
{
	bool flag=true,indicate=false;;
	int count=0;
	while(true)
	{

		for(int i=0; i<row; i++)
		{
			for(int j=0; j<column; j++)
			{
				if(arr[i][j]==2)
				{
					if(arr[i-1][j]==1 && ispresent(i-1,j))
					{
						arr[i-1][j]=2;
						indicate=true;
					}
					if(arr[i+1][j]==1 && ispresent(i+1,j))
					{
						arr[i+1][j]=2;
						indicate=true;
					}
					if(arr[i][j-1]==1  && ispresent(i,j-1))
					{
						arr[i][j-1]=2;
						indicate=true;
					}
					if(arr[i][j+1]==1 && ispresent(i,j+1))
					{
						arr[i][j+1]=2;
						indicate=true;
					}
					
				}
			}
		}
		if(!indicate)
			break;
		indicate=false;
		count++;
	}

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<column; j++)
		{
			if(arr[i][j]==1)
				return -1;
		}
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[row][column];
		cout<<"0|1|2"<<endl;
		for(int i=0; i<row; i++)
		{
			for(int j=0; j<column; j++)
			{
				cin>>arr[i][j];
			}
		}
		cout<<rottingtime(arr);

	}
	return 0;
}