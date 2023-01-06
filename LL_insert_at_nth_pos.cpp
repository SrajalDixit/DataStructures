#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  node* next;

};
node* head;

void insert(int x,int n)
{
   node* temp1=new node;
   temp1->data=x;
   temp1->next=NULL;

   if(n==1)
   {
     temp1->next=head;
     head=temp1;

     return;
   }

  node* temp2=head;
   for(int i=0;i<n-2;i++)
   {
        temp2=temp2->next;
   }

    temp1->next=temp2->next;
    temp2->next=temp1;


}

void print(void)
{
   node* temp=head;
   while (temp!=NULL)
   {
     cout<<temp->data<<" ";
     temp=temp->next;
   }
   cout<<endl;
   
}

int main()
{
      head=NULL;

    insert(2,1);
    insert(3,2);
    insert(5,2);
    insert(6,1);

    int x,n;
    cout<<"enter element and position :"<<endl;
    cin>>x>>n;

    insert(x,n);
    cout<<"list is:"<<endl;
    print();

}
