#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n,x,y,a,b;
    cin>>n;
    while(n!=0)
    {
        cin>>x>>y;
        while(n--)
        {
            cin>>a>>b;
            if(a>x && b>y)
                cout<<"NE"<<endl;
            else if(a<x && b<y)
                cout<<"SO"<<endl;
            else if(a<x && b>y)
                cout<<"NO"<<endl;
            else if(a>x && b<y)
                cout<<"SE"<<endl;
            else
                cout<<"divisa"<<endl;
        }
        cin>>n;
    }
    return 0;
}
