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

    node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->add;
    }
    temp->add=temp2->add;
    temp2->add=temp;
}

void print(void)
{
   node* temp=head;
   while (temp!=NULL)
   {
     cout<<temp->data<<" ";
     temp=temp->add;
   }
   cout<<endl;
   
}

void revrec(node* p)
{
   if(p->add==NULL)
   {
     head=p;
     return;
   }
   revrec(p->add);
   node* q=p->add;
   q->add=p;
   p->add=NULL;
   

}

int main()
{
    head=NULL;

    insert(5,1);
    insert(6,2);
    insert(7,2);
    insert(8,1);
    cout<<"List is : ";
    print();
    revrec(head);
    cout<<endl;
    cout<<"reverse list is : ";
    print();
}
