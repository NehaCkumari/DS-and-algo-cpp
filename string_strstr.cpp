//2 strings-->1st main and 2nd target
//3 possibilities
//geeksforkeeks,for
//geeksforkeforreks,forr
//geeksforkeeks,fr
#include<bits/stdc++.h>
using namespace std;
int strstr(string str, string target)
{
	int index=-1;
	int i=0;
	for(int j=0; j<str.length(); j++)
	{
		if(target[0]==str[j])
			index=j;
			i++;
		if(target[i]==str[j])
		{
			while(i<target.length())
			{
				if(target[i]==str[j])
					i++;j++;
				else
					return -1;
			}
			return index;
		}
		else
			return -1;



	}

}


int main()
{
	string str="geeksfor";
	string target="for";
	cout<<strstr(str,target);
	return 0;
}