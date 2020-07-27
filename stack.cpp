#include<bits/stdc++.h>
using namespace std;
#define maxsize 10 //max size for stack
class Stack{
private:
	int top;
public:
	int mystack[maxsize];
	Stack()
	{
		 top=-1;
	}
	bool isempty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}
	bool isfull()
	{
		if(top==maxsize-1)
			return true;
		else
			return false;
	}
	void push(int data)
	{
		if(isfull())
		{
			cout<<"Stack is full, can't push"<<endl;
		}
		else
		{
			top=top+1;
			mystack[top]=data;
		}

	}
	int pop()
	{
		if(isempty())
		{
			cout<<"stack is empty, can't pop"<<endl;
		}
		else
		{
			int out=mystack[top];
			top=top-1;
			return out;

		}
	}
	int peek()
	{
		if(isempty())
		{
			cout<<"stack is empty, can't peek"<<endl;
		}
		else
		{
			return mystack[top];
		}
	}

};
int main()
{
	Stack s1;
	cout<<s1.isempty();
	s1.push(12);
	s1.push(15);
	s1.push(17);
	s1.peek();
	s1.pop();



	return 0;
}