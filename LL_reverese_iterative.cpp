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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->add;
    }
    cout<<endl;
}
void reverse(void)
{
    node* temp=head,*prev=NULL,*next;
    while(temp!=NULL)
    {
        next=temp->add;
        temp->add=prev;
        prev=temp;
        temp=next;



    }
    head=prev;

}
int main()
{
    head=NULL;

    insert(2,1);
    insert(3,1);
    insert(5,2);
    insert(6,3);
    print();
    reverse();
    print();
    
    return 0;
}
