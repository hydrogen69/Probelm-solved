#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp;
    vector<string> temp2;

    for (int i=1; i<s.size(); i++ )
    {
        temp+=s[i-1];
        temp+=s[i];
        temp2.push_back(temp);
        temp.clear();
    }
    int max=count(temp2.begin(),temp2.end(),temp2[0]);
    temp=temp2[0];
    for (int i=1; i<temp2.size() ; i++ )
    {
        int c=   count(temp2.begin(),temp2.end(),temp2[i]);

        if(c>max)
        {
            max=c;
            temp=temp2[i];
        }
    }

    cout<<temp<<endl;

}
