#include <bits/stdc++.h>
using namespace std;

int res(int n)
{
    int sum=0;
   int i=5;
   while(n/i>=1)
   {
       sum+=n/i;
        i*=5;
   }

    return sum;
}

int main()
{
    int n,m;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        printf("%d\n",res(m));
    }

    return 0;
}
