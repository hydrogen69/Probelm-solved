#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int> str;
    map<string,int> ::iterator it;

    string temp;
    int t,num,res;
    cin>>t;
    while(t--)
    {
        cin>>num;

        cin>>temp;
        it=str.find(temp);
        if(num==1)
        {
            cin>>res;
            if(it==str.end())
                str.insert(make_pair(temp,res));
            else
                it->second+=res;
        }
        else if(num==2)
        {
            if(it!=str.end())
                str.erase(temp);

        }
        else
        {
            if(it!=str.end())
                cout<<it->second<<endl;
            else
                cout<<"0"<<endl;
        }
    }
    return 0;
}
