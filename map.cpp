#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> m;
	m.insert({1,21});
	m.insert({3,25});
	m.insert({5,27});
	m.insert({6,32});
	m.insert({7,20});
	for(auto itr=m.find(5); itr!= m.end(); itr++)//itr return address of key 5//do not use itr<m.end()
	{
		cout<<itr->first<<"  "<<itr->second<<endl;

	}

	return 0;
}