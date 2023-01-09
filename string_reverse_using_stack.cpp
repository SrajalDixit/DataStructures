#include<bits/stdc++.h>
using namespace std;

void reverse(string str,int n)
{
    stack<char> s;

    for(int i=0;i<n;i++)
    {
        s.push(str[i]);
    }

    for(int i=0;i<n;i++)
    {
        str[i]=s.top();
        s.pop();
    }
    cout<<str;
}

int main()
{
    string str="kalpana";
    
    

    reverse(str,str.length());
    


}
