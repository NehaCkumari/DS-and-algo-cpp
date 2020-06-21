// adjacency matrix
#include<bits/stdc++.h>
using namespace std;
int arr[20][20];
void displaymatrix(int v)
{
	for(int i=0; i<v; i++)
	{
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