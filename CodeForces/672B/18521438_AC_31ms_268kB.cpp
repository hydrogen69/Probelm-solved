
#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    set<char> ch;
    string str;

    cin>>str;

    if(str.length()>26)
        cout<<"-1"<<endl;
    else
    {
        for (int i=0; i<str.size() ; i++ )
        {
            ch.insert(str[i]);
        }
        cout<<str.length()-ch.size()<<endl;
    }
    return 0;
}
