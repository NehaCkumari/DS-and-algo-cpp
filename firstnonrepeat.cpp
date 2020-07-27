//first non-repeating character
//aabc-->a -1 b b
#include<bits/stdc++.h>
using namespace std;

void firstrep(char arr[], int n)
{
	queue<char> q;
	char temp;
	for(int i=0; i<n; i++)
	{
		if(q.front()!=arr[i] && arr[i]!=temp){
			q.push(arr[i]);
			cout<<q.front()<<" ";
		}
		else
		{
			if(!q.empty())
				{temp=q.front();
				q.pop();}
			cout<<-1<<" ";
		}

	}

}
int main()
{
	int n=6,k=8;
	char arr[n]={'a','a','a','a','d','e'};
	char name[k]={'a','a','b','b','c','d','e','f'};
	firstrep(arr,n);
	cout<<endl;
	firstrep(name,k);
	return 0;
}