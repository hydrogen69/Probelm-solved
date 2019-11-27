#include<bits/stdc++.h>


int fun(int a,int b)
{
    if(b)
        return fun(b,a%b);
     return a;
}
int main()
{
    int n;
    bool flag=true;
    scanf("%d",&n);

    for (int i=n/2;i>=2 ;i-- )
    {
        if(fun(i,n-i)==1){
        printf("%d %d\n",i,n-i);
        flag=false;
        break;
        }
    }
    if(flag)printf("1 %d\n",n-1);

    return 0;
}
