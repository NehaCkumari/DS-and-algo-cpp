// adjacency matrix
#include<bits/stdc++.h>
using namespace std;
int arr[20][20];// default value is 0
void displaymatrix(int v)
{
	cout<<" |";
	for(int k=0; k<v; k++)
	{
		cout<<k+1<<" ";
	}
	cout<<endl;
	for(int i=0; i<v; i++)
	{
		cout<<i+1<<"|";
		for(int j=0; j<v; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

void getedge(int u, int v)
{
	arr[u][v]=1;
	arr[v][u]=1;
}

int main()
{
	getedge(0,1);
	getedge(1,2);
	getedge(0,4);
	displaymatrix(5);

	return 0;
}