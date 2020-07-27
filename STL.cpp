#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;//blank vactor
	vector<int> v2{11,21,31};
	//vector<string> v3(v3.begin(), v3.end());
	//vector<int> v4(3,1);// size is 3 and all is initialised by 1


	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);

	for(vector<int>::iterator i=v1.begin(); i<v1.end(); i++)
	{
		cout<<*i<<"->"<<endl;
	}
	//2 3 4
	vector<int>::iterator i=v1.begin();
	v1.insert(i,7);// 7 2 3 4
	v1.insert(i,2,10);//10 10 7 2 3 4
	v1.insert(i,v2.begin(),v2.end());// 11 21 31 10 10 7 2 3 4
	v1.pop_back();

	v1.erase(i);

	vector<int>::iterator i=v1.begin();
	vector<int>::iterator j=v1.end();
	advance(i,3);//iterator will point 3rd element
	distance(i,j); //length
	return 0;
}
