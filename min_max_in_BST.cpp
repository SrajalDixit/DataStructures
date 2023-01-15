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
    root->right=insert(root->right,x);

    return root;

}

bool search(node* root,int x)
{
    if(root==NULL)
    return false;

    else if(root->data==x)
    {
        return true;
    }

    else if(x<root->data)
    {
        return search(root->left,x);
    }

    else 
     return search(root->right,x);

}

int min(node* root)
{
    if(root==NULL)
    {
        cout<<"error tree is empty"<<endl;
        return -1;
    }
   
   node* current=root;
   while(current->left!=NULL)
   {
    current=current->left;
   }
   return current->data;

    


}

int max(node* root)
{
    if(root==NULL)
    {
        cout<<"error tree is empty"<<endl;
        return -1;
    }
   
   node* current=root;
   while(current->right!=NULL)
   {
    current=current->right;
   }
   return current->data;

}

int main()
{
    node* root=NULL;

    root=insert(root,20);
    insert(root,15);
    insert(root,25);
    insert(root,9);
    insert(root,10);
    insert(root,29);
    insert(root,35);

    int t;
    cin>>t;
    if(search(root,t)==1)
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;

    cout<<"min and max no. is "<<min(root)<<" and "<<max(root);


}

