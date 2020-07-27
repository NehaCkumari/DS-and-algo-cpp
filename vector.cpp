#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> &a)
{
	int sum=0;
	vector<int>:: iterator i;
	i=a.begin();
	while(i<a.end())
	{
		sum+=*i;
		++i;
	}
	return sum;	
}
vector<int> reverse(vector<int> &a)
{
	vector<int> c;
	vector<int> d=a;
	vector<int>:: iterator i;
	i=a.begin();
	while(i<a.end())
	{
		c.push_back(d.back());
		d.pop_back();
		i++;
	}
	return c;
}
void printfun(vector<int> &a)
{
	vector<int>:: iterator i;
	i=a.begin();
	while(i!=a.end())
	{
		cout<<*i<<"  ";
		++i;
	}
	cout<<endl;	
}

int main()
{
	vector<int> v;
	vector s;
	v.push_back(2);
	v.push_back(4);
	v.push_back(7);
	v.push_back(9);
	printfun(v);
	cout<<"sum : "<<sum(v)<<endl;
	v=reverse(v);
	printfun(v);
	return 0;
}