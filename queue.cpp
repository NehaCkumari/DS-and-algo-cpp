#include<bits/stdc++.h>
using namespace std;
#define maxsize 10 //max size for stack
class Queue{
private:
	int rear;
	int front;
public:
	Queue()
	{
		rear=front=-1;
	}
	int myqueue[maxsize];
	bool isempty()
	{
		if(front<0 || front<rear)
			return true;
		else
			return false;
	}
	bool isfull()
	{
		if(rear==maxsize-1)
			return true;
		else
			return false;
	}
	void enqueue(int data)
	{
		if(isfull())
		{
			cout<<"Queue is full, can't push"<<endl;
		}
		else
		{
			if(rear==-1 &&front==-1)
			{
				rear=rear+1;
				front=front+1;
				myqueue[rear]=data;
			}
			else
			{
				rear++;
				myqueue[rear]=data;
			}
		}
	}
	int dequeue()
	{
		if(isempty())
		{
			cout<<"Queue is empty, can't pop"<<endl;
		}
		else
		{
			int data=myqueue[front];
			front++;
			return data;
		}
	}

};
int main()
{
	Queue q;
	q.isempty();
	q.isfull();
	q.enqueue(12);
	q.dequeue();
	return 0;
}