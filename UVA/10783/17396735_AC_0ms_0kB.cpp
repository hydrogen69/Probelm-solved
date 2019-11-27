#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
   vector<int>res;
    int a,b,sum;
    for (int i=0;i<t ;i++ )
    {
        cin>>a>>b;
        sum=0;
        for (int j=a;j<=b ;j++ )
        {
            if(j%2==1) sum+=j;
        }

        res.push_back(sum);
    }

        for (int i=0;i<t ;i++ )
        {

            cout<<"Case "<<i+1<< ": "<<res[i]<<endl;
        }
            ;
}

