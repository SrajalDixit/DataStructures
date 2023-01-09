#include<bits/stdc++.h>

using namespace std;

struct node
{
   int data;
   node* add;
};
node* head;

void insert(int x,int n)
{
    node* temp=new node;
    temp->data=x;
    temp->add=NULL;

    if(n==1)
    {
       temp->add=head; 
       head=temp;
       return;
    }
    
    node* temp1=head;
    for(int i=0;i<n-2;i++)
    {
       temp1=temp1->add;
    }
   
   temp->add=temp1->add;
   temp1->add=temp;

}

// printing LL in forward order using recursion

void print(node* temp)
{
    
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    print(temp->add);
}

// printing LL in reverse order using recursion

void revprint(node* temp)
{
    
    if(temp==NULL)
    {
        return;
    }
    revprint(temp->add);
    cout<<temp->data<<" ";
}

int main()
{
    int x,n;
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(5,2);
    insert(7,3);
    cout<<"forward order : ";
    print(head);
    cout<<endl;
    cout<<"reverse order : ";
    revprint(head);

}
