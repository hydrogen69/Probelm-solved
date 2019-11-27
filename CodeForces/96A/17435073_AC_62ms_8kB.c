
#include<stdio.h>


int main()
{
    char str[100];

    scanf("%s",str);

    int j=0;
    for (int i=0;i<strlen(str)-1 ;i++ )
    {
        if(str[i]==str[i+1]) j++;
        else j=0;
        if(j==6)break;
    }

     if(j==6) printf("YES\n");
     else printf("NO\n");



}
