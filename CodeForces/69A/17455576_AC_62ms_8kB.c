#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int y[n];
    int z[n];
    int f=0;
    int s1=0,s2=0,s3=0;
     for (int i=0;i<n ;i++ )
     {
         scanf("%d",&x[i]);
         s1+=x[i];
         scanf("%d",&y[i]);
         s2+=y[i];
         scanf("%d",&z[i]);
         s3+=z[i];
     }




    if(s1==0 && s2==0 && s3==0)printf("YES\n");
    else printf("NO\n");
    return 0;
}
