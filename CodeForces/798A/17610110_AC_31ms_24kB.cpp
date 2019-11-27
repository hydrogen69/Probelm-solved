#include <string>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string str;
    cin>>str;

    int f=0;

    for (int i=0;i<str.size()/2 ;i++ )
    {
        if(str[i]!=str[str.size()-i-1] )
       f++;

    }
    if(f==0 && str.size()%2==1 || f==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
