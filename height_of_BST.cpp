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

    else if(root->data<=x)
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
    return true;

    else if(root->data<=x)
    return search(root->left,x);

    else
    return search(root->right,x);

    
}

int findheight(node* root)
{
    if(root==NULL)
    {
        return -1;
    }

     else {
        int left = findheight(root->left);
        int right = findheight(root->right);

        int height = (left < right) ? right+1 : left+1;
        return height;
    }
}

int main()
{
   node* root=NULL;

   root=insert(root,20);
   insert(root,30);
   insert(root,25);
   insert(root,12);
   insert(root,40);
   insert(root,19);
   insert(root,15);
   insert(root,14);

   if(search(root,40))
   cout<<"found"<<endl;
   else 
   cout<<"not found"<<endl;

   cout<<"height of the tree is : "<<findheight(root)<<endl;


}
