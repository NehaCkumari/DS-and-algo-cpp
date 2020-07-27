//Graph
//Adjacency matrix
// Adjacency list
//1 representation of graph using stl
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);	
}

void printgraph(vector<int> adj[], int V)
{
	for(int i=0; i<V; i++)
	{
		cout<<i<<":";
		for(int x : adj[i])
		{
			cout<<"->"<<x;
			
		}
		cout<<endl;
	}
}


int main()
{

	int V=5;
	vector<int> adj[V];// like 2d array

	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	addedge(adj,1,4);
	addedge(adj,2,3);
	addedge(adj,2,4);
	addedge(adj,3,4);
		

	printgraph(adj,V);

	return 0;
}