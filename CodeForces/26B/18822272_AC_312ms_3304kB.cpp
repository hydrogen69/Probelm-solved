#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    stack<char>ch;
    int f=0;
    for (int i=0; i<str.size() ; i++ )
    {
        if(str[i]=='(')
            ch.push(str[i]);
        else if(str[i]==')' && !ch.empty())
        {
            ch.pop();
            f++;
        }
    }
    cout<<f*2<<endl;
}
