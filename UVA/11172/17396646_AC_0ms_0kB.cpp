#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    int a,b;
    vector<char>ch;
    for (int i=0;i<t ;i++ )
        {
            cin>>a>>b;
            if(a>b) ch.push_back('>');
            else if(a<b) ch.push_back('<');
            else ch.push_back('=');
        }

for (int i=0;i<ch.size();i++  )
{

    cout<<ch[i]<<endl;
}
    ;
}

