#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        string str;
        cin>>str;
        string f,s;
        f=str[0];
        s=str[str.size()-1];
        int a=stoi(f);
        int b=stoi(s);
        cout<<a+b<<endl;
    }


}
