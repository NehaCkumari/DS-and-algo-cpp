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
void bfs(vector<int> adj[], int start)
{
	queue<int> q;
	int visited[10];
	for(int i=0; i<10; i++)
	{
		visited[i]=0;
	}


	q.push(start);
	visited[start]=1;
	while(!q.empty())
	{
		int front = q.front();
		cout<<front<<" ";
		q.pop();
		for(vector<int> :: iterator i=adj[front].begin(); i<adj[front].end(); ++i)
		{
			if(visited[*i]==0)
			{
				q.push(*i);
				visited[*i]=1;
			}
		}
	}


}

void dfs(vector<int> adj[], int start)
{
	stack<int> s;
	int visited[10];
	for(int i=0; i<10; i++)
	{
		visited[i]=0;
	}
	s.push(start);
	while(!s.empty())
	{
		int top= s.top();
		s.pop();

		visited[top]=1;
		cout<<top<<"  ";
		for(vector<int>:: iterator i=adj[top].begin(); i<adj[top].end(); ++i)
		{
			if(visited[*i]==0)
			{
				s.push(*i);
				visited[*i]=1;
			}
		}
		
	}	
}

int main()
{
	int V=5;
	vector<int> adj[V];
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	addedge(adj,1,4);
	addedge(adj,2,3);
	addedge(adj,2,4);
	addedge(adj,3,4);
		

	printgraph(adj,V);
	bfs(adj,0);
	cout<<endl;
	dfs(adj,0);

	return 0;
}