#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,v,u,n,i=1,f=0;
    float t1,t2;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&v,&u);
        if(v>=u)  //nodir sroter beg besi hole nouka ajiboneo opare jabe na...
        printf("Case %d: can't determine\n",i);
        else
        {
        t1=(a*1.0)/u;
        t2=(a*1.0)/sqrt(u*u-v*v);
        if(t1==t2)
            printf("Case %d: can't determine\n",i);

        else
         printf("Case %d: %.3f\n",i,t2-t1);

        }
        i++;
    }
}
