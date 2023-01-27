#include<bits/stdc++.h>
using namespace std;

int evaluation(string str)
{
    stack<int> st;
    int op1,op2,res;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            st.push(str[i] - '0');
        }

       
        else if(str[i]=='+')
        {
           op1=st.top();
           st.pop();

           op2=st.top();
           st.pop();
            
            res=op1+op2;
            st.push(res);

        }

         else if(str[i]=='-')
        {
           op1=st.top();
           st.pop();

           op2=st.top();
           st.pop();
            
            res=op1-op2;
            st.push(res);

        }

         else if(str[i]=='*')
        {
           op1=st.top();
           st.pop();

           op2=st.top();
           st.pop();
            
            res=op1*op2;
            st.push(res);

        }

         else if(str[i]=='/')
        {
           op1=st.top();
           st.pop();

           op2=st.top();
           st.pop();
            
            res=op1/op2;
            st.push(res);

        }


    }

    return st.top();
}

int main()
{
    string str;
    cout<<"enter the string in postfix : ";
    cin>>str;

    cout<<evaluation(str)<<endl;
}
