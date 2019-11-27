
#include<bits/stdc++.h>

using namespace std;
int main()
{

    string str;
    string s;
    cin>>str>>s;
    if(equal(str.begin(),str.end(),s.rbegin()))
    {
        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;

    return 0;
}
