#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;

};

node* getnode(node* head, int data)
{
	head=new node();
	head->data=data;
	head->next=NULL;
	return head;
}


node* insert_element(node* head, int data)
{
	if(head==NULL)
	{
		head=getnode(head,data);
	}
	else
	{
		node* temp=head;
		while(temp->next)
		{
			temp=temp->next;

		}
		temp->next=getnode(temp->next,data);

	}
	return head;

}

void printnode(node* head)
{
	node* temp=head;
	while(temp)
	{
		cout<<temp->data<<"->";
		temp=temp->next	;
	}
	cout<<endl;
}


// 1 2 3 
// 
node* reverse(node* head)
{
	node* new_head=NULL;
	while(head)
	{
		if(new_head==NULL)
		{	new_head=new node();
			new_head->data=head->data;
			head=head->next;
			new_head->next=NULL;
		}
		else
		{
			node* temp;
			temp=new node();
			temp->data=head->data;
			head=head->next;
			temp->next=new_head;
			new_head=temp;

		}

	}	
	return new_head;
}

//1 2 9
//+ 2 3
//----------
//1  5  2

//9 2 1
//3 2
//----
//2 5 1

//algo ->reverse both numbers ->sum-> digit traversal(length traverse) -> again reverse
node* add(node* h1, node* h2)
{
	h1=reverse(h1);
	printnode(h1);
	h2=reverse(h2);
	printnode(h2);
	int carry=0 ,sum;
	node* answer;
	while(h1 || h2)
	{
		sum=(h1->data)+(h2->data)+carry;
		answer=insert_element(answer,sum%10);
		if(sum>9){
			carry=sum/10;
		}
		h1=h1->next;
		h2=h2->next;
	}

	return answer;
}



int main()
{
	node* head=NULL;
	node* h2=NULL;
	node* ans;
	head=insert_element(head,1);
	insert_element(head,2);
	//insert_element(head,3);
	printnode(head);

	h2=insert_element(h2,1);
	insert_element(h2,2);
	printnode(h2);

	ans=add(head,h2);
	printnode(ans);


	return 0;
}