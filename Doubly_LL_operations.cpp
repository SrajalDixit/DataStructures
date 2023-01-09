#include<bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   node* prevadd;
   node* nextadd;
};

node* head;

//  insertion of data

node* getnewnode(int x)
{
    node* newnode=new node;
    newnode->data=x;
    newnode->prevadd=NULL;
    newnode->nextadd=NULL;

    return newnode;
}

// insert at head of the list
void insertathead(int x)
{
    node* newnode=getnewnode(x);
    
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    
    head->prevadd=newnode;
    newnode->nextadd=head;
    head=newnode;
   
}

// print the list in forward order
void print(void)
{
    if(head==NULL) return;
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->nextadd;
    }
}

// print the list in reverse order
void reverseprint(void)
{
    node* temp=head;
    if(head==NULL) return;

    while(temp->nextadd!=NULL)
    {
        temp=temp->nextadd;
    }
    

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prevadd;
    }
}

// insert at tail of the list
void insertattail(int x)
{
    node* newnode=getnewnode(x);
    node* temp=head;
    while(temp->nextadd!=NULL)
    {
        temp=temp->nextadd;
    }

    newnode->prevadd=temp;
    temp->nextadd=newnode;

}

// deleting of an element
void deletef(int n)
{
    node* temp=head;

    for(int i=0;i<n-2;i++)
    {
        temp=temp->nextadd;
    }
    node* q=temp->nextadd;
    temp->nextadd=q->nextadd;
    free(q);


}

int main()
{
    head=NULL;
    insertathead(5);
    insertathead(6);
    insertathead(9);
    insertathead(0);
    
    cout<<"forward list is : ";
    print();
    cout<<endl;
    cout<<"reverse list is : ";
    reverseprint();
    cout<<endl;
    cout<<"list after inserting at tail : ";
    insertattail(7);
    print();

    int n;
    cout<<endl;
    cout<<"enter the position which has to be deleted"<<endl;
    cin>>n;

    deletef(n);
    print();

    
}
