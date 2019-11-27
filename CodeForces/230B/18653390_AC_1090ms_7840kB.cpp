
#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
long long i, j;
long long prime[mx];

void seive()
{
    prime[0] = prime[1] = 1;
    for(i=2; i<mx; i++)
    {
        if (prime[i]==0)
        {
            for(j=i*i; j<mx; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
}
bool check(long long n)
{
    double sqr= sqrt(n);
    if(sqr== int(sqr))
        return true;
    return false;

}

int main()
{
    seive();
    long long tn, n;
    cin>>tn;
    for(i=0; i<tn; i++)
    {
        cin>>n;
        if (n==4)
            printf("YES\n");

        else if (n%2==0)
            printf("NO\n");

        else if(check(n) && prime[int(sqrt(n))]==0)
            printf("YES\n");

        else
            printf("NO\n");

    }
}
