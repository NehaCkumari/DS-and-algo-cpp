#include<bits/stdc++.h>
using namespace std;
bool c=false;
struct node{
	int data;
	node* left;
	node* right;
};

node* getnewnode(int data)
{
	node* newnode=new node();
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}

node* insert(node* root, int data)
{
	if (root==NULL)
	{
		root=getnewnode(data);
	}

	else if(data<root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}
//traversal
void inorder(node* root)
{
	if (root == NULL) 
        return;
	inorder(root->left);
	cout<<root->data<<"  ";
	inorder(root->right);
}

void preorder(node* root)
{
	if (root == NULL) 
        return;
	cout<<root->data<<"  ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root)
{
	if (root == NULL) 
        return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<"  ";
}

bool search(node* root, int key)
{	
	if(root==NULL)
		return false;
	else if (key==root->data)
	{
		return true;
	}
	else if (key<root->data)
	{
		search(root->left,key);
	}
	else {
		search(root->right,key);
	}

}

node* minvalnode(node* root)
{
	node* current = root;
	while(current && current->left!=NULL)
	{
		current=current->left;
	}
	return current;
}

int maxvalnode(node* root)
{
	node* current = root;
	while(current && current->right!=NULL)
	{
		current=current->right;
	}
	return current->data;
}

node* deletenode(node* root, int data)
{
	c=search(root,data);
	if (root==NULL)
		return root;
	else if(data<root->data)
	{
		root->left=deletenode(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=deletenode(root->right,data);
	}
	else
	{
		//case 1: leaf node
		if(root->left && root->right == NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		//case 2: 1 child node
		else if(root->left==NULL)
		{
			node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		//case 3: 2 child
		else
		{
			node* temp=minvalnode(root->right);
			root->data=temp->data;
			root->right=deletenode(root->right,temp->data);
		}


	}
	return root;
}


void LevelOrder(node *root) {
	if(root == NULL) return;
	queue<node*> Q;
	Q.push(root);  
	//while there is at least one discovered node
	while(!Q.empty()) {
		node* current = Q.front();
		Q.pop(); // removing the element at front
		cout<<current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
		
	}
}
int level(node* root)
{
	if(root==NULL)
		return 0;
	else{
		int left_side, right_side;
		left_side =level(root->left);
		right_side=level(root->right);
		if(left_side<right_side)
		{
			return right_side+1;
		}
		else{
			return left_side+1;
		}
	}

}



int main()
{
	node* root=NULL;
	root=insert(root,11);
	root=insert(root,6);
	root=insert(root,8);
	root=insert(root,19);
	root=insert(root,4);
	root=insert(root,10);
	root=insert(root,5);
	root=insert(root,17);
	root=insert(root,43);
	root=insert(root,49);
	root=insert(root,31);
	cout<<"Inorder traversal: ";
	inorder(root);
	cout<<endl;
	cout<<"Preorder traversal: ";
	preorder(root);
	cout<<endl;
	cout<<"Postorder traversal: ";
	postorder(root);
	cout<<endl;
	cout<<"Searching..... ";
	cout<<search(root,43);
	cout<<endl;
	cout<<search(root,4);
	cout<<endl;
	cout<<search(root,99);
	cout<<endl;
	//cout<<"minimum value: "<<minvalnode(root)<<endl;
	cout<<"maximum value: "<<maxvalnode(root)<<endl;
	root=deletenode(root,6);
	if (c)
	{
		cout<<"Deleted!!"<<endl;
		cout<<"After deletion: ";
		inorder(root);

	}
	else
	{
		cout<<"Not Found!";
	}
	cout<<endl<<"The height of tree is "<<level(root);

	cout<<endl<<"level traversal";
	LevelOrder(root);
	return 0;
}