
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,f=0,g=0;

    while(cin>>a)
    {

        int s;
        int x;
        f=0;
        g=0;
        for (int i=0; i<a ; i++ )
        {
            cin>>b;
            if(i>0)
            {
                if(b>x)
                {
                    f++;
                    x=b;
                }
                if(b<s)
                {
                    g++;
                    s=b;
                }
            }
            else
            {
                s=b;
                x=b;
            }
        }
        cout<<f<<" "<<g<<endl;
    }
}
