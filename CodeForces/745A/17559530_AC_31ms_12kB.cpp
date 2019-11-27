#include <string>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{


    string str,temp;
    cin>>str;
    temp=str;
    str=str[str.size()-1]+str;
    str.erase(str.end()-1);
    int f=0;
    while(str!=temp)
    {
        str=str[str.size()-1]+str;
        str.erase(str.end()-1);
        f++;
    }
    cout<<f+1<<endl;


    return 0;
}
