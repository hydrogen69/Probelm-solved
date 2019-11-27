#include<stdio.h>

int main()
{
     int n,temp;
    scanf("%d",&n);


    int num[7];

    for (int i=0;i<7 ;i++ )
    {

        scanf("%d",&num[i]);

    }

    int sum=0;
    int i=0;
    while(sum<n)
    {
        sum+=num[i];
        i++;
        if(i==7)i=0;
    }
    if(i==0)printf("7\n");
    else printf("%d\n",i);



    return 0;
}
