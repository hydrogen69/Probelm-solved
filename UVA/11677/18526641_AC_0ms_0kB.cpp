#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c,d;

    cin>>a>>b>>c>>d;
    int cas=1;
    int res;
    while(a!=0 || b!=0 || c!=0 || d!=0)
    {

        if(d<b )
        {
            res=((d-b)+60);
            a+=1;
        }

        else
            res=((d-b));

        if(c<a)

            res+=((c-a)+24)*60;

        else
            res+=(c-a)*60;
        if(d<b)
            a-=1;
        printf("%d\n",res);
        cin>>a>>b>>c>>d;
        res=0;

    }

}

