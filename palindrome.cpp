#include<bits/stdc++.h>
using namespace std;
bool palindrome_int(int x)
{
	int copy=x;
	int sign=1;
	long long int sum=0;
	if(x<0)
		{sign=-1;}
	copy=copy*sign;
	while(copy>0)
	{
		sum=(sum*10)+(copy%10);
		copy=copy/10;
	}
	sum=sum*sign;
	return (sum==x)?true:false;

}

bool palindrome_str(char x[])
{
	bool flag=true;
	int len=strlen(x);
	for(int i=0; i<(len/2); i++)
	{
		if(x[i]!=x[len-1-i])
		{
			flag=false;
		}
	}
	return flag;
}

int main()
{
	int a=121;
	char name[20]="aba";
	//string hello="abba";
	cout<<palindrome_int(a);
	cout<<palindrome_str(name);
	//cout<<palindrome_str(hello);
	return 0;
}