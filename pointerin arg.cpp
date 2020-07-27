#include<iostream>
using namespace std;
int *add(int* x, int* y)
{
	int *z;
	*z=*x + *y;
	return z;
}
int main()
{
	int a=2,b=8;
	cout<<66;
	cout<<add(&a,&b);
	cout<<6600;
	return 0;
}
