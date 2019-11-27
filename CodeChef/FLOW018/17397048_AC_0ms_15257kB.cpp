#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int factor(int n)
{
    if(n > 1)
        return n * factor(n - 1);
    else
        return 1;
}
int main()
{

    int t;
    cin>>t;
    vector<int>num;
    int n;
    for (int i=0; i<t ; i++ )

    {

        cin>>n;
        num.push_back(factor(n));


    }
    for (int i=0; i<t ; i++ )
    {
        cout<<num[i]<<endl;
    }
   
    return 0;
}
