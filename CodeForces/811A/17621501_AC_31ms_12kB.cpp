#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=sqrt(a);
    a*=a+1;
    if(a>b)
        cout<<"Valera";
    else
        cout<<"Vladik";
}
