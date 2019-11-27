#include <string>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<string> str;
    set<string>s;
    set<string> ::iterator it;
    vector<pair<string,int> > p;
    int n;
    cin>>n;

    string temp;

    for (int i=0;i<n ;i++ )
    {
        cin>>temp;
        str.push_back(temp);
        s.insert(temp);
    }
    int f=0;
    for (it=s.begin();it!=s.end() ;it++ )
    {
        f=count(str.begin(),str.end(),*it);
        p.push_back(make_pair(*it,f));
    }
    sort(p.begin(),p.end());
   for (int i=0;i<p.size() ;i++ )
   {
       cout<<p[i].first<<" "<<p[i].second<<endl;
   }
       ;



    return 0;
}
