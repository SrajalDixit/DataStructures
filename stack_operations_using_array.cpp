#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int arr[MAX];
int top=-1;


void push(int x)
{
   if(top==MAX-1)
   {
    cout<<"Error:stack overflow "<<endl;
    return;
   }

   top++;
   arr[top]=x;
}

void pop(void)
{
    if(top==-1)
    {
        cout<<"Error:stack underflow "<<endl;
        return;
    }

    top--;
}

void print()
{
    if(top==-1)
    {
        cout<<"Error:stack underflow "<<endl;
        return;
    }

    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}

int tops()
{
    return arr[top];
}

int main()
{
    push(2);
    push(5);
    push(6);
    push(0);
    cout<<"stack is : ";
    print();
    
    cout<<"stack after pop : ";
    pop();
    print();
    
    cout<<"top of stack is : ";
    cout<<tops();
    
    

}
