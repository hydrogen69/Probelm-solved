#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,res=0,i=1;
    scanf("%d",&n);

    while(n--)
    {
        res=0;
        scanf("%d %d %d",&a,&b,&c);
        res=c%a;
        res=res+b;
        if(res>a)
            res=res-a;
        printf("Case %d: %d\n",i,res);
        i++;
    }

}
