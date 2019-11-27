#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main()
{
    string str;

    while( cin>>str)
    {

        for (int i=0; i<str.size() ; i++ )
        {

            if(str[i]-65>=0 &&str[i]-65<3)
                cout<<"2";
            else if(str[i]-65>=3 &&str[i]-65<6)
                cout<<"3";
            else if(str[i]-65>=6 &&str[i]-65<9)
                cout<<"4";
            else if(str[i]-65>=9 &&str[i]-65<12)
                cout<<"5";
            else if(str[i]-65>=12 &&str[i]-65<15)
                cout<<"6";
            else if(str[i]-65>=15 &&str[i]-65<19)
                cout<<"7";
            else if(str[i]-65>=19 &&str[i]-65<22)
                cout<<"8";
            else if(str[i]-65>=22 &&str[i]-65<26)
                cout<<"9";
            else
                cout<<str[i];
        }
        cout<<endl;

    }



}
