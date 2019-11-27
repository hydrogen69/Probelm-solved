#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,n,p,q,sum,egg,res=0;
    scanf("%d",&t);
    int k=1;
    while(t--)
    {
        sum=0,res=0;
        scanf("%d %d %d",&n,&p,&q);
        for (int i=1; i<=n ; i++ )
        {
            scanf("%d",&egg);
            sum+=egg;
            if(sum<=q && i<=p)
            {
                res++;
            }
        }
        printf("Case %d: %d\n",k,res);
        k++;
    }
}

