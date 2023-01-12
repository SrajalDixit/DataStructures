#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* add;
};

node* front=NULL;
node* rear=NULL;

void enqueue(int x)
{
    node* temp= new node;
    temp->data=x;
    temp->add=NULL;
    
    if(front==NULL & rear==NULL)
    {
         front=temp;
         rear=temp;
         return;
    }

   else if(front==rear && rear!=NULL)
    {
        rear=temp;
        front->add=temp;
        return;
    }

    rear->add=temp;
    rear=temp;

}

void dequeue()
{
    node* temp=front;
    if(front==NULL && rear==NULL)
    {
        cout<<"queue is empty :"<<endl;
        return;
    }

    else if(front==rear && front!=NULL)
    {
        front=rear=NULL;
        free(temp);
        return;
        
    }

    front=front->add;
    free(temp);
}

void print()
{
    cout<<"queue is :"<<endl;
    node* temp=front;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->add;

    }
    cout<<endl;


}

int main()
{
    int x;
    for(int i=0;i<4;i++)
    {
        cin>>x;
       enqueue(x);
    }

    print();

    dequeue();
    print();
    dequeue();
    print();
}
