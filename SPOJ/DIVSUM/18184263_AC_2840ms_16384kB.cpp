#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n,a,sum=0;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        scanf("%d",&a);
        for (int i=1;i<=a/2 ;i++ )
        {
            if(a%i==0)
                sum+=i;
        }
        printf("%d\n",sum);

    }

}
