#include<bits/stdc++.h>
using namespace std;
class Stack{
	queue<int> q1, q2;
	int current_size;
public:
	Stack()
	{
		current_size=0;
	}
	void PUSH(int data)
	{
		current_size++;
		q2.push(data);
		while(!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> q=q1;
		q1=q2;
		q2=q;

	}
	void POP()
	{
		if(q1.empty())
			{return ;}
		else
		{
			q1.pop();
			current_size--;
		}
	}

	int size()
	{
		return current_size;
	}

	void printfun()
	{
		queue<int> qq=q1;
		while(!qq.empty())
		{
			cout<<qq.front()<<"  ";
			qq.pop();
		}
		cout<<endl;
	}
};
int main()
{
	Stack s;
	s.PUSH(22);
	s.PUSH(24);
	s.PUSH(99);
	s.printfun();
	s.POP();
	s.POP();
	s.PUSH(45);
	s.PUSH(5);
	s.PUSH(95);
	s.printfun();	
	return 0;
}