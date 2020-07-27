#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
	if(n==0 || n==1)// base condition
		return 1;
	else
		return n*fac(n-1);
		cout<<"recurssion1   ";
	cout<<endl;
	cout<<"again   ";
}
int main()
{
	int num=5;
	cout<<fac(num);

	return 0;
}