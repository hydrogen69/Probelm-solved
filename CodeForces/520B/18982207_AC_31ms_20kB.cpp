#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,res=0;
    scanf("%d %d",&n,&m);
    while (n != m)
    {
        if (m > n)
        {
            if (m%2==0) m /= 2, res++;
            else m++, res++;
        }
        else if (n > m) m++, res++;
    }

    printf("%d\n",res);
    return 0;
}

