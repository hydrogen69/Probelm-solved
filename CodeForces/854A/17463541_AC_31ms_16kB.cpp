#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n/2; i>=1; i--)
    {
        if(__gcd(i,n-i)== 1)
        {

           printf("%d %d\n",i,n-i);
            return 0;
        }

    }

}
