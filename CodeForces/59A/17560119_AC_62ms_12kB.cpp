#include <string>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    cin>>str;

    int f=0,g=0;

    for (int i=0; i<str.size() ; i++ )
    {

        if(str[i]>=65&& str[i]<=90)
            f++;
        else
            g++;
    }
    if(f<=g)
    {
        for (int i=0; i<str.size() ; i++ )
        {
            if(str[i]>=65&& str[i]<=90)
                printf("%c",str[i]+32);
            else
                cout<<str[i];
        }
        cout<<endl;
    }
    else
    {
        for (int i=0; i<str.size() ; i++ )
        {
            if(str[i]>=65&& str[i]<=90)
                cout<<str[i];
            else
                printf("%c",str[i]-32);
        }
        cout<<endl;

    }

    return 0;
}
