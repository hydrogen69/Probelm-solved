#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>num;
     int a,temp,sum=0;

    for (int i=0;i<n ;i++ )
    {

    cin>>a;
    while(a>0)
    {
        temp=a%10;
        a=a/10;
        sum+=temp;
    }
    num.push_back(sum);
    sum=0;
    }

    for (int i=0;i<n ;i++ )
    {

        cout<<num[i]<<endl;
    }
        ;


}
