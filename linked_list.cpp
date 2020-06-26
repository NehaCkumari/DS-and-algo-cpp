#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
node* getnode(int data)
{
		node* newnode=new node();
		newnode->data=data;
		newnode->next=NULL;
		return newnode;	
}

node* addnode(node* head,int data)
{
	if(head==NULL)
	{
		head=getnode(data);
	}
	else
	{
		node* temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=getnode(data);
	}
	return head;
}

void display(node* head)
{
	node* temp=head;
	while(temp!=NULL){
		cout<<"->"<<temp->data<<"  ";
		temp=temp->next;	
	}
}
bool search(node* head, int key)
{
	if(head==NULL)
		return false;
	else{
		node* temp=head;
		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				return true;
			}
			else
				temp=temp->next;
		}
	}
	return false;
}
node* deleteof(node* head, int key)
{
	if(head==NULL)
	{
		cout<<"List is empty";
		

	}
	else if(head->data==key)
	{
		head=head->next;
		
	}
	else
	{
		node* temp=head;
		while(temp!=NULL)
		{
			if(key==temp->next->data)
			{
				temp->next=temp->next->next;
				
			}
			else
				temp=temp->next;
		}
	}
	return head;

}
/*void insertat()
{

}

void reverse()
{

}
*/

int main()
{
	node* head=NULL;
	head=addnode(head,2);
	addnode(head,3);
	addnode(head,4);
	addnode(head,5);
	addnode(head,6);
	addnode(head,7);
	display(head);
	cout<<endl<<search(head,10)<<endl;
	head=deleteof(head,2);
	cout<<endl<<"After deletion "<<2<<endl;
	display(head);
	
	
	return 0;
}