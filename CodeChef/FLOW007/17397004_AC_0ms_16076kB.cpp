#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    vector<int>num;

    int n, reverse= 0, remainder;
    for (int i=0;i<t ;i++ )
    {

    cin >> n;
    reverse=0;
    while(n != 0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }

    num.push_back(reverse);

    }

    for (int i=0;i<t ;i++ )
    {

        cout<<num[i]<<endl;
    }
        ;

    return 0;
}
