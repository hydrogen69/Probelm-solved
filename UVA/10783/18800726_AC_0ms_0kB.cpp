#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,res=0,res2=0,i=1;
    scanf("%d",&n);

    while(n--)
    {
        res=0,res2=0;
        scanf("%d %d",&a,&b);
        if(b%2==1) b+=1;
        if(a%2==1 && a>1) a-=1;
        res=pow(b/2,2);
        res2=pow(a/2,2);


        printf("Case %d: %d\n",i,res-res2);
        i++;
    }

}
