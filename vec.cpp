#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;//0,1,2
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	vector<int>::iterator i;
	for(i=v.begin(); i!=v.end();i++)
	{
		cout<<*i<<"  ";
	}
	cout<<endl;
	vector<int>::iterator j=v.begin()+1;
	j=v.erase(j);
	cout<<*j;
	cout<<endl;
	for(i=v.begin(); i!=v.end();i++)
	{
		cout<<*i<<"  ";
	}
	return 0;
}