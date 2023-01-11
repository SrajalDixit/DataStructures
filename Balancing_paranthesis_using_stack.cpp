#include<bits/stdc++.h>
using namespace std;
bool check(string str)
{
   stack<char> s;

   if(str.empty()) 
   return 1;

   for(int i=0;i<str.length();i++)
   {
    if(s.empty()) return 0;
        if(str[i]=='(' || str[i]=='[' || str[i]=='{' )
        {
            s.push(str[i]);
        }

        else if(str[i]==')'  || str[i]==']'  || str[i]=='}')
        {
            if(s.top()=='(' && str[i]==')')
            {
                s.pop();
            }

           else if(s.top()=='[' && str[i]==']')
            {
                s.pop();
            }

            else if(s.top()=='{' && str[i]=='}')
            {
                s.pop();
            }

            else
            return 0;
            
        }
   }

   if(s.empty()==1)
   return 1;

   else
   return 0;
        
    }

   
   


int main()
{
    string str;
    cout<<"enter the expression : ";
    cin>>str;

    if(check(str)==1)
    cout<<"Balanced"<<endl;

    else
    cout<<"not balanced"<<endl;
}
