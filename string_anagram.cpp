#include<bits/stdc++.h>
using namespace std;
void anagram(string str1, string str2)
{
	int arr[26];
	for(int i=0; i<26; i++)
	{
		arr[i]=0;
	}
	for(int j=0; j<str1.length(); j++)
	{
		int num=str1[j]-'a';
		arr[num]+=1;
	}
	for(int k=0; k<str2.length(); k++)
	{
		int num=str1[k]-'a';
		arr[num]-=1;
	}	
	for(int m=0; m<26; m++)
	{
		if(arr[m]!=0)
		{
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";

}


int main()
{
	string st1="abcdeee";
	string st2="bcad";
	anagram(st1,st2);
	return 0;
}