#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,greatest=0,lowest=0,temp1,temp2;

    scanf("%d",&a);
printf("Lumberjacks:\n");
    while(a--)
    {
        greatest=0,lowest=0;

        for (int i=0; i<10 ; i++ )
        {
            if(i==0)
            {
                scanf("%d",&temp1);
            }
            else
            {
                scanf("%d",&temp2);
                if( temp2>temp1)
                    lowest++;
                else
                    greatest++;
                    temp1=temp2;
            }
        }
    if(greatest==0 || lowest==0)
        printf("Ordered\n");
    else printf("Unordered\n");

    }
}
