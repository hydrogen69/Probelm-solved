#include <string>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string temp="hello";
    string str;
    cin>>str;

    int f=0,f1=0;

    for (int i=0;i<str.size() ;i++ )
    {
        if(temp[f]==str[i])
        {
            f++;
            f1++;
        }

    }

    if(f1==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



    return 0;
}
