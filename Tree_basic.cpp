#include<bits/stdc++.h>
using namespace std;

//		6
//	   / \
//	  4   9
//	 / \  / \
//	3   5 8  11
//        /   \
//        7     12
//BST

struct treenode{
	int data;
	treenode* left;
	treenode* right;
};

treenode* getnode(int data)
{
	treenode* node=new treenode();
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

treenode* insertnode(treenode* root, int data)
{
	if(!root)
		root=getnode(data);
	else
	{
		if(data < root->data)
			root->left=insertnode(root->left,data);
		else
			root->right=insertnode(root->right,data);

	}
	return root;
}



// The are 3 ways of breadth traversing tree:
//1 inorder
//2 preorder
//3 postorder


void inorder(treenode* root)
{
	if(!root)
		return;
	else
	{
		
		inorder(root->left);
		cout<<root->data<<" ->";
		inorder(root->right);
	} 
	
}

void preorder(treenode* root)
{
	if(!root)
		return;
	else
	{
		cout<<root->data<<" ->";
		preorder(root->left);
		preorder(root->right);
	} 
	
}

void postorder(treenode* root)
{
	if(!root)
		return;
	else
	{
		
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ->";
	} 
	
}


// hight of tree 
int height(treenode* root)
{
	if(!root)
		return 0;
	int lheight=height(root->left);
	int rheight=height(root->right);
	return max(lheight,rheight)+1;
		
}


//print data of the given level
void printgivenlevel(treenode* root, int level)
{
	if(!root)
		return;
	if(level==1)
	{
		cout<<root->data<<"  ";

	}
	else if(level >1)
		printgivenlevel(root->left,level-1);
		printgivenlevel(root->right,level-1);
}


// level order traversal

void leveltraversal(treenode* root)
{

	int h=height(root);
	for(int i=1; i<=h; i++)
	{
		printgivenlevel(root,i);
	}

}


//vertical traversal
/*void verticaltrave(treenode* root)
{

}*/

int main()
{
	treenode* root=NULL;
	root=insertnode(root,6);
	insertnode(root,4);
	insertnode(root,9);
	insertnode(root,3);
	insertnode(root,5);
	insertnode(root,8);
	insertnode(root,11);
	insertnode(root,12);
	insertnode(root,7);


	cout<<"Inorder traversal : ";
	inorder(root);
	cout<<endl;

	cout<<"Preorder traversal : ";
	preorder(root);
	cout<<endl;

	cout<<"Postorder traversal : ";
	postorder(root);
	cout<<endl;

	cout<<"Height of tree is "<<height(root);

	cout<<endl<<"Nodes at level "<<4<<" : ";

	printgivenlevel(root,4);

	cout<<endl<<"Level order traversal ";
	leveltraversal(root);

	return 0;
}