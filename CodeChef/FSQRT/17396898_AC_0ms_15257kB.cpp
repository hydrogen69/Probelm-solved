#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>num;

    int a;
    for (int i=0;i<n ;i++ )
    {

        cin>>a;
        num.push_back(sqrt(a));

    }

    for (int i=0;i<n ;i++ )
    {
        cout<<num[i]<<endl;
    }

}
