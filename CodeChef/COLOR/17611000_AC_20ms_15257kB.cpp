#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>b;
    while(b--)
    {

        cin>>a;
        string str;
        cin>>str;
        vector<int>arr;
        arr.push_back(count(str.begin(),str.end(),'R'));
        arr.push_back(count(str.begin(),str.end(),'B'));
        arr.push_back(count(str.begin(),str.end(),'G'));
        int m=*max_element(arr.begin(),arr.end());
        cout<<a-m<<endl;
    }


    return 0;
}
