#include<bits/stdc++.h>

using namespace std;
bool isPrime(int n)
{
    if(n%3==0 || n%5==0 || n%7==0)
        return false;
    else
        return true;
}
int main()
{
    int n,m,f=0;
    scanf("%d %d",&n,&m);


    if( m%2==0)
        printf("NO\n");
    else if(n==2 && m==3 || n==3 && m==5 || n==5 && m==7)
    {
        printf("YES\n");
    }
    else if(n>5)
    {

        if(!isPrime(m))
            printf("NO\n");
        else
        {
            for (int i=n+2; i<=m ; i+=2 )
            {
                if(isPrime(i))
                {
                    if(m==i)

                    {
                        printf("YES\n");
                        break;
                    }
                    else
                        printf("NO\n");
                    break;
                }
            }
        }
    }
    else
        printf("NO\n");

}
