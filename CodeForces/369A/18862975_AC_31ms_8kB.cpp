#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,temp,f=0,res;
    scanf("%d %d %d",&n,&a,&b);
    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&temp);
        if(temp==1)
            a--;
        else
        {
            if(b<=0)
                a--;
            else
                b--;
        }

    }
    if(a>=0 && b>=0)
        res=0;

    else if(a<0 && b<0)
        res=(a+b);
    else
        res=min(a,b);
    printf("%d\n",res*-1);


}
