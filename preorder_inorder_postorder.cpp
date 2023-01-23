#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 node* left;
 node* right;

};

node* getnewnode(int x)
{
    node* temp=new node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

node* insert(node* root, int x)
{
    if(root==NULL)
    {
        root=getnewnode(x);
    }

    else if(root->data>=x)
    {
        root->left=insert(root->left,x);
    }

    else 
    root->right=insert(root->right,x);

    return root;
}

void preorder(node* root)
{
    if(root==NULL) return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;
    root=insert(root,15);
    root=insert(root,16);
    insert(root,20);
    insert(root,9);
    insert(root,5);
    insert(root,50);
    insert(root,12);

    postorder(root);
}

