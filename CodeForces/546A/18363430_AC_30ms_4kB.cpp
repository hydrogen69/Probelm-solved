#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    int sum=a*((c*(c+1))/2);

    if(sum>b)
    printf("%d\n",sum-b);
    else
        printf("0\n");
}
