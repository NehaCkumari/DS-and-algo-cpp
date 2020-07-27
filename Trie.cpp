#include<bits/stdc++.h>
using namespace std;
const int alphabet_size=26;
const string keyy="a";
struct trienode{
	char data;
	int isendofword;
	trienode* children[alphabet_size];
};

trienode* getnode()
{
	trienode* newnode =new trienode();
	newnode->isendofword=0;
	for(int i=0; i<alphabet_size; i++)
	{
		newnode->children[i]=NULL;
	}
	return newnode;
}

void insert(trienode* root, string key)
{
	trienode* temp=root;
	for(int i=0; i<key.length(); i++)
	{
		int index=key[i]-keyy[0];
		if(!temp->children[index])
		{
			temp->children[index]=getnode();
			temp->children[index]->data=key[i];
		}
		temp=temp->children[index];

	}

	temp->isendofword+=1;

}

int search(trienode* root, string key)
{
	trienode* temp=root;
	for(int i=0; i<key.length(); i++)
	{
		int index=key[i]-keyy[0];
		if(temp->children[index])
			temp=temp->children[index];
	}
	return temp->isendofword;
}

void deletenode(trienode* root, string key)
{
	trienode* temp=root;
	for(int i=0; i<key.length(); i++)
	{
		int index=key[i]-keyy[0];
		if(temp->children[index])
			temp=temp->children[index];
	}
	temp->isendofword=0;	
}

int main()
{
	trienode* root=getnode();
	insert(root,"tree");
	insert(root,"tree");
	insert(root,"tree");
	insert(root,"tree");
	insert(root,"trie");
	insert(root,"plant");
	insert(root,"apple");
	int c=search(root,"tree");
	if(c>0)
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
	deletenode(root,"tree");
	int s=search(root,"tree");
	if(s>0)
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}	
	return 0;
}