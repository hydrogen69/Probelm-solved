#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,num,sum=0,i=1;
    scanf("%d",&n);
    while(n!=0)
    {
        sum=0;
        int temp=n;
        while(n--)
        {
            scanf("%d",&num);
            if(num==0)
                sum++;
        }
        printf("Case %d: %d\n",i,(temp-sum)-sum);
        i++;
        scanf("%d",&n);
    }
}
