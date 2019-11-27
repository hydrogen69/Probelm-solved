
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,x,y;
    cin>>a>>b;

    string str;

    cin>>str;
    char m,n;

    while(b--)
    {
        cin>>x>>y;

        cin>>m>>n;
        for (int i=x-1; i<y ; i++ )
        {
            if(str[i]==m)
            {
                str[i]=n;
            }

        }

    }
    cout<<str<<endl;
}
