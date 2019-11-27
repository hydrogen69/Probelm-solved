#include<bits/stdc++.h>

using namespace std;

void Prime(int n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    bool f=true;
    int count =0;
    int p=3;
    while(f)
    {
        if(prime[p] && prime[n-p])
        {
            count++;;
        }
        p+=2;
        if(p>n-p)
            f=false;

    }
    printf("%d\n",count);
}

int main()
{
    int a;

    scanf("%d",&a);
    while(a!=0)
    {
        Prime(a);
        scanf("%d",&a);
    }

}
