#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);

    while(b!=0)
    {
        if(a%10==0)
            a=a/10;
        else a--;
    b--;
    }
    printf("%d\n",a);

}
