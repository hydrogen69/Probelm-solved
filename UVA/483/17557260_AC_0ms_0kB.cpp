#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void print(vector<char> ch)
{
    for (int i=ch.size()-1; i>=0 ; i-- )
    {
        cout<<ch[i];
    }
    cout<<" ";
}
int main()
{

    string str;
    string temp;

    while(getline(cin,str))
    {
        istringstream iss(str);
        vector<string> results(istream_iterator<string> {iss},
                               istream_iterator<string>());

        for (int i=0; i<results.size() ; i++ )
        {
            temp=results[i];
            for (int j=temp.size()-1; j>=0 ; j-- )
            {

                cout<<temp[j];
            }
            if(i!=results.size()-1)
                cout<<" ";
        }
        cout<<endl;

    }
    // cout<<endl;
}
