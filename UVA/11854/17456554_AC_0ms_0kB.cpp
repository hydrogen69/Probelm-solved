#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>num;
    int a,b,c;

    cin>>a>>b>>c;
    while(a!=0&&b!=0&&c!=0)
    {  num.push_back(a);
       num.push_back(b);
       num.push_back(c);
       sort(num.begin(),num.end());

        if((num[0]*num[0]+num[1]*num[1])==num[2]*num[2])
            cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
        cin>>a>>b>>c;
        num.clear();
    }
}
