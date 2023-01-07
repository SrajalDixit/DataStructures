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
void deletef(int n)
{
    node* temp3=head;
    node* temp=new node;
    if(n==1)
    {
        head=temp3->add;
        free(temp3);
        return;

    }
    for(int i=0;i<n-2;i++)
    {
        temp3=temp3->add;
    }
    temp=temp3->add;
    temp3->add=temp->add;
    free(temp);

}
void print(void)
{
    node* temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->add;
        
    }
    cout<<endl;
}


int main()
{
    head=NULL;
    
    insert(2,1);
    insert(3,2);
    insert(6,1);
    insert(7,3);
    print();
    
    int n;
    cout<<"enter the position to be deleted:"<<endl;
    cin>>n;
    deletef(n);
    
    print();
    
    return 0;
    
    

    
    
}
