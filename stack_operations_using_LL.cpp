#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* add;
};

node* top;

void push(int x)
{
    node* temp =new node;
    
    temp->data=x;
    temp->add=top;
    top=temp;

}

void pop()
{
    if(top==NULL)
    {
        cout<<"Error:stack underflow : ";
        return;
    }
    node* q=top;

    top=q->add;
    free(q);

}

void print()
{
     if(top==NULL)
    {
        cout<<"Error:stack underflow : ";
        return;
    }
    cout<<"stack is : ";
    node* temp=top;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->add;
    }
    cout<<endl;
}

void tops()
{
    cout<<"top is : ";
    cout<<top->data;
}

int main()
{
    push(3);
    push(4);
    push(8);
    push(1);

    print();
    pop();
    print();
    
    tops();
}
