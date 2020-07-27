#include<bits/stdc++.h>
using namespace std;
//This.is.a.reverse.string.pragramme
//pragramme.string.reverse.a.is.This
int main()
{
	int n;
	cout<<"Enter the number of the sentences you want to enter: "<<endl;
	cin>>n;
	string str;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the sentence(s): "<<endl;
		cin>>str;
		cout<<str<<endl;
	
		string dot="";
		string rev="";
		cout<<str.size();
		for(int i=str.size()-1; i>=0; i--)
		{
		if(str[i]!='.')
		{
			rev=str[i]+rev;
		}
		else
		{
			dot=dot+rev+".";
			rev="";
		}
		}
		dot=dot+rev;
		cout<<endl;
		cout<<dot;
	}

	return 0;
}