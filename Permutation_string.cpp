#include<bits/stdc++.h>
using namespace std;
void permutation(string str, int l, int r)
{
	if(l==r)
	{
		cout<<" ["<<str<<"] ->";
	}
	else
	{
		for(int i=l; i<=r; i++)
		{
			swap(str[l],str[i]);
			permutation(str,l+1,r);
			swap(str[l],str[i]);
		}
	}

}
void permutation_itr(string str)
{
	for(int i=0; i<str.size(); i++)
	{
		//without recurssion
	}
}
int main()
{
	string str;
	int n;
	cout<<"Enter the number of words: "<<endl;
	cin>>n;
	cout<<"Enter the string: "<<endl;
	cin>>str;
	//permutation of the string 
	//ABC->[ABC][ACB][BAC][BCA][CAB][CBA]
	permutation(str,0,4);

	return 0;
}