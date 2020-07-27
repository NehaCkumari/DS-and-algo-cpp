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

// got problem while deleting last element
/*void deletenode(node* head, int value)
{
	if(head==NULL)
		cout<<"Empty!!";
	else if(head->data=value)
		head=NULL;
	else
	{
		node* prevnode=head;
		node* currentnode=head->next;
		node* temp;
		while(currentnode)
		{
			if(currentnode->data==value)
			{
				temp=currentnode;
				prevnode->next=currentnode->next;
				delete temp;

			}
			else
			{
				currentnode=currentnode->next;
				prevnode=prevnode->next;
			}
		}

	}
}*/

  // 5. Delete node by unique key
 void deleteNodeByKey(node* head,int k) {
    if (head == NULL) {
      cout << "Singly Linked List already Empty. Cant delete" << endl;
    } else if (head != NULL) {
      if (head ->data == k) {
        head = head -> next;
        cout << "Node UNLINKED with keys value : " << k << endl;
      } else {
        node * temp = NULL;
        node * prevptr = head;
        node * currentptr = head -> next;
        while (currentptr != NULL) {
          if (currentptr ->data == k) {
            temp = currentptr;
            currentptr = NULL;
          } else {
            prevptr = prevptr -> next;
            currentptr = currentptr -> next;
          }
        }
        if (temp != NULL) {
          prevptr -> next = temp -> next;
          cout << "Node UNLINKED with keys value : " << k << endl;
        } else {
          cout << "Node Doesn't exist with key value : " << k << endl;
        }
      }
    }
 
  }


/*int middle_element(node* head)
{
	node* temp=head;
	int count=0;
	while(temp)
	{
		count++;
		temp=temp->next;
	}
	int mid;
	if(count%2!=0)
	{
		mid=(count/2)+1;
	}
	else
	{
		mid=count/2;
	}
	node* temp1=head;
	int i=0;
	while(i<mid)
	{
		i++;
		temp1=temp1->next;

	}
	return temp1->data;


}*/

int middle_element(node* head)
{
	node* slow=head;
	node* fast=head;
	while(fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(!fast)
			break;
	}
	return slow->data;

}

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

//2/3/4/5/6	/7
//2	

node* rotate(node* head, int k)
{
	int count=1;
	int n_size=1;
	node* rot=head;
	node* tail=head;
	node* temp=head;
	while(tail->next)
	{
		n_size++;
		tail=tail->next;
	}
	if(k>n_size)
	{
		k=k%n_size;
	}
	while(count<k)
	{
		count++;
		rot=rot->next;
	}
	if(rot==tail){return head;}
	else
	{	head=rot->next;
		rot->next=NULL;
		tail->next=temp;
	}
	return head;

}				

/*node* reverse_knodes(node* head, int k)
{

}*/
void swap(int *a, int *b)
{
	int *t;
	t=a;
	a=b;
	b=t;

}
node* pairwiseswap(node* head)
{
	node* temp=head;
	while(temp!=NULL && temp->next!=NULL)
	{
		swap(&temp->data,&temp->next->data);
		temp=temp->next->next;
	}

}

//no output
node* mergesortedll(node* h1, node* h2)
{
	node* temp, *newhead=NULL, *current;
	node* small;

	while(h1 || h2)
	{
		if(h1->data < h2->data)
		{
			temp=h1;
			h1=h1->next;
		}
		else
		{
			temp=h2;
			h2=h2->next;			
		}
		if(!newhead)
		{
			current=temp;
			newhead=current;

		}
		else
		{
			current->next=temp;
			current=current->next;
		}


	}
	while(h2)
	{
		current=h2;
	}

	while(h1)
	{
		current=h1;
	}

	return newhead;
}

int intersectionpoint(node* head1, node* head2)
{
	node* temp1=head1;
	node* temp2=head2;
	bool flag=false;
	int count1=1, count2=1,diff;
	while(temp1->next){
		count1++;
		temp1=temp1->next;
	}
	while(temp2->next){
		count2++;
		temp2=temp2->next;
	}
	diff=abs(count2-count1);
	int count=0;
	node* temp11=head1;
	node* temp22=head2;	
	while(count<diff)
	{
		count++;
		if(count2>count1){temp22=temp22->next;}
		else
			{temp11=temp11->next;}
	}
	while(temp11 || temp22)
	{
		if(temp11==temp22)
		{
			flag=true;
			return temp11->data;
		}
		else
		{
			temp11=temp11->next;
			temp22=temp22->next;
		}
	}
	if(!flag)
		return -1;

}




int main()
{
	node* head=NULL;
	node* head1=NULL;
	node* tt;
	head=insert_element(head,2);
	insert_element(head,5);
	insert_element(head,6);	
	insert_element(head,8);
	insert_element(head,9);
	//insert_element(head,7);
	printnode(head);
	head1=insert_element(head1,1);
	insert_element(head1,4);
	insert_element(head1,7);	
	insert_element(head1,10);
	insert_element(head1,12);
	insert_element(head1,14);
	insert_element(head1,16);
	//insert_element(head,7);
	printnode(head1);
	//cout<<middle_element(head)<<endl;
	//deleteNodeByKey(head,6);
	//printnode(head);
	//cout<<middle_element(head);	
	//head=deletenode(head,5);		
	//printnode(head);
	//head=deletenode(head,4);		
	//printnode(head);	
	//head=reverse(head);
	//printnode(head);
	//int k=9;
	//cout<<"After rotating linkedlist with "<<k<<" positions"<<endl;
	//head=rotate(head,k);
	//printnode(head);
	//pairwiseswap(head);
	//printnode(head);
	cout<<"commaon point "<<intersectionpoint(head,head1);
	tt=mergesortedll(head,head1);
	printnode(tt);

	

	return 0;
}