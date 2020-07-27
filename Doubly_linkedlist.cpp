#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};

node* addnode(node* head,int data)
{
	if(head==NULL)
	{
		node* newnode=new node();
		newnode->data=data;
		newnode->prev=NULL;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		node* newnode=new node();
		newnode->data=data;
		newnode->next=NULL;
		node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->prev=temp;
	}
	return head;
}

void displayforward(node* head)
{
	node* temp=head;
	while(temp!=NULL){
		cout<<"->"<<temp->data<<"  ";
		temp=temp->next;	
	}
}

void displaybackward(node* head)
{
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;	
	}
	while(temp!=NULL)
	{
		cout<<"->"<<temp->data<<"  ";
		temp=temp->prev;
	}
}


int main()
{
	node* head=NULL;
	head=addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	addnode(head,6);
	addnode(head,7);
	cout<<"forward";
	displayforward(head);
	cout<<endl<<"backward";
	displaybackward(head);
	
	return 0;
}