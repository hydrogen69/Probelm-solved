#include<bits/stdc++.h>

using namespace std;

int main()
{
    int date[6];
    int t;
    scanf("%d",&t);
    int i,Res;
    for( i=1; i<=t; i++)
    {
        scanf("%d/%d/%d",&date[0], &date[1], &date[2]);
        scanf( "%d/%d/%d",&date[3], &date[4], &date[5]);
        Res=(date[2]-date[5]);
        if(date[4]>date[1])
            Res--;
        else if(date[4]==date[1])
        {
            if(date[3]>date[0])
                Res--;
        }

        if(Res>130)
            printf("Case #%d: Check birth date\n", i);
        else if(Res<0)
            printf("Case #%d: Invalid birth date\n", i );
        else
            printf("Case #%d: %d\n",i,Res);
    }

}
