#include <string>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{


    int n;
    cin>>n;

    string str;

    while(n--)
    {
        cin>>str;
        if(str=="1" || str=="78" || str=="4")cout<<"+"<<endl;
        else if(str[str.size()-1]=='5' && str[str.size()-2]=='3') cout<<"-"<<endl;
        else if(str[0]=='9' && str[str.size()-1]=='4') cout<<"*"<<endl;
        else cout<<"?"<<endl;
    }



    return 0;
}
