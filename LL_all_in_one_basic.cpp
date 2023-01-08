#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 node* add;

};
node* head;
void insert(int x,int k)
{
    node* temp=new node;
    temp->data=x;
    temp->add=NULL;

    if(k==1)
    {
        temp->add=head;
        head=temp;

        return;
    }

    node* temp2=head;
    for(int i=0;i<k-2;i++)
    {
        temp2=temp2->add;
    }
    temp->add=temp2->add;
    temp2->add=temp;

}

void print(void)
{
    node* temp=head;
    cout<<"List is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->add;

    }
    cout<<endl;
}

void deletef(int j)
{
    node* temp0=head;

    if(j==1)
    {
        head=temp0->add;
        free(temp0);
        return;
    }

    node* temp1;
    for(int i=0;i<j-2;i++)
    {
        temp0=temp0->add;
    }
    temp1=temp0->add;
    temp0->add=temp1->add;
    free(temp1);
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
    for(int i=0;i<10;i++)
    {

        int n,x,k;
        cout<<"if you want to enter a single element press 1"<<endl;
        cout<<"if you want to insert multiple elements press 2"<<endl;
        cout<<"if you want to reverse the list press 3"<<endl;
        cout<<"if you want to print the list press 4"<<endl;
        cout<<"if you want to delete an element press 5"<<endl;
        cin>>n;
        if(n==1)
        {
            cin>>x>>k;
            insert(x,k);
            i=0;
        }
        
        else if(n==2)
        {
            cout<<"enter no. of elements to be inserted"<<endl;
            int t;
            cin>>t;
            while(t--)
            {
                cin>>x>>k;
                insert(x,k);
            }
            i=0;
        }

        else if(n==3)
        {
            reverse();
            i=0;
        }

        else if(n==4)
        {
            print();
            i=0;
        }

        else if(n==5)
        {
            cout<<"enter the position to be deleted"<<endl;
            int j;
            cin>>j;
            deletef(j);
            i=0;
        }

        else
        {
          cout<<"Invalid input bsdk"<<endl;
          i=0;
        }
    
    }

    return 0;
}
