#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,d,sum=0,res,f=0;
    scanf("%d",&n);
    int k;
    for ( int i=1;i<=4 ;i++ )
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(c<=n-a || c<=n-b ||d<=n-b ||d<=n-a)
         {
          res=min(a,b);
           f=1;
           k=i;
        }
    }
    if(f==1)
        printf("%d %d %d\n",k,res,n-res);
    else printf("-1\n");

}
