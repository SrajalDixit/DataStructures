#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head;
void insert(int x)
{
    Node* temp=new Node;
    temp->data=x;
    temp->next=head;
    head=temp;
    
}
void print()
{
    Node* temp=head;
    cout<<"list is:"<<endl;
    while (temp!=NULL)

    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<"\n";
    

}


int main()
{
    head=NULL;
    int n,x;
    cout<<"enter size linked list"<<endl;
    cin>>n;
    cout<<"enter elements in the list:"<<endl;

    for(int i=0;i<n;i++)
    {
         cin>>x;
         insert(x);
         print();
    }

    return 0;
}
