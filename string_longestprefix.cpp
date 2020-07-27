#include<bits/stdc++.h>
using namespace std;
//geeks-->geek
void longestprefix(string arr[], int n)
{
	int i=0;
	string prefix="";
	for(int j=0; j<arr[i].length(); j++)
	{
		if(arr[i][j]==arr[i+1][j])
			prefix+=arr[i][j];
	}


}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size_arr;
		cin>>size_arr;
		string arr[size_arr];
		for(int i=0; i<size_arr; i++)
		{
			cin>>arr[i];
		}
		longestprefix(arr,size_arr);

	}
	return 0;
}