
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,i=1,temp,res=0,ljump=0,sjump=0;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&temp);
        for (int i=0; i<temp ; i++ )
        {
            if(i==0)
            {
                scanf("%d",&b);
                res=b;
            }
            else
            {
                scanf("%d",&b);
                if( b>res)
                    ljump++;
                else if (b<res)
                    sjump++;
                res=b;
            }
        }

        printf("Case %d: %d %d\n",i,ljump,sjump);
        ljump=0,sjump=0;
        i++;
    }
}
