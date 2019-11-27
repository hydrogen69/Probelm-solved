#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    scanf("%d",&n);

    long a,b;
    while(n--)
    {

        scanf("%ld %ld",&a,&b);

        if(b%a==0)
            printf("%ld %ld\n",a,b);
        else
            printf("-1\n");
    }
    return 0;
}
