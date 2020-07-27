//input->"123", output=123
//input->"1a2", output=-1
///we have 2 subproblems 1--> checking whether string is numerical or not and 2--> converting it to int
#include<bits/stdc++.h>
using namespace std;
bool is_digit(char letter)
{
	return (letter>='0' && letter<='9')?true:false;
}

int convert_atoi(string str)
{
	int sign=1;
	int res=0;
	int i=0;
	if(str=="")
		return 0;
	if(str[0]=='-')
	{
		sign=-1;
		i++;
	}
	for(;i<str.length(); i++)
	{
		if(!is_digit(str[i]))
			return -1;
		res=res*10+str[i]-'0';
	}
	return res*sign;

}

int main()
{
	string name="hello";
	string number="-1234";
	string	pos_num="987";
	cout<<convert_atoi(name)<<endl;
	cout<<convert_atoi(number)<<endl;
	cout<<convert_atoi(pos_num)<<endl;

	return 0;
}