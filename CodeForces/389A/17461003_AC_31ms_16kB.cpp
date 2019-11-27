#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    vector<int>num;
    int res=0;
    for (int i=0; i<t; i++)
    {
        cin>>n;
        num.push_back(n);
        res=__gcd(res,num[i]);
    }


    cout<<res*t<<endl;
    return 0;
}
