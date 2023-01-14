#include<bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   node* left;
   node* right;
};

node* newnode(int x)
{
    node* temp=new node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

node* insert(node* root,int x)
{
    if(root==NULL)
    {
        root=newnode(x);
    }

    else if(x<=root->data)
    {
       root->left=insert(root->left,x);
    }

    else 
    {
        root->right=insert(root->right,x);
    }

    return root;

}

bool search(node* root,int x)
{
    if(root==NULL)
    {
        return false;
    }

    else if(root->data==x)
    {
        return true;
    }

    else if(x<=root->data)
    {
        return search(root->left,x);
    }

    else
    return search(root->right,x);
}

int main()
{
    node* root=NULL;

    root= insert(root,15);	
	 insert(root,10);	
	 insert(root,20);
	 insert(root,25);
	 insert(root,8);
	 insert(root,12);

    int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";

    return 0;
}
