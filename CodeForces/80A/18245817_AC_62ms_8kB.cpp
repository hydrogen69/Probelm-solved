#include<bits/stdc++.h>

using namespace std;

void Prime(int m,int n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    if(n%2==0)

        printf("NO\n");
    else
    {

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    if(!prime[n]) printf("NO\n");
    else
   {
           for (int p=m+1;p<=n ;p++ )
       if (prime[p] )
         if(p==n)
           {
              printf("YES\n");
              break;
           }
        else
        {printf("NO\n");
        break;
        }
    }

    }


}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);

    Prime(a,b);

}
