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
    node* temp= new node;
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
    root->right=insert(root->right,x);

    return root;
}

void traverse(node* root)
{
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        node* current = q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) q.push(current->left);
        if(current->right!=NULL) q.push(current->right);
        q.pop();
    }

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
     insert(root,75);
    
    traverse(root);
}
