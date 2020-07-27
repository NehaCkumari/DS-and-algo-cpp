#include<bits/stdc++.h>
using namespace std;
void removeduplicate(string str)
{
	vector<char> str1;
	vector<char>:: iterator it;
	for(int i=0; i<str.length(); i++)
	{
		str1.push_back(str[i]);
	}
	for(int j=0; j<str.length(); j++)
	{	
		int count=0;
		for(it=str1.begin(); it!=str1.end(); it++)
		{
			if(str[j]==*it){count++;}
			if(count>1)
			{
				str1.erase(it);
				it--;
			}

		}
	}
	for(it=str1.begin(); it!=str1.end(); it++)
	{
		cout<<*it;
	}

}

int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		getline(cin,str);
		cin.ignore();
		removeduplicate(str);
	}

	return 0;
}