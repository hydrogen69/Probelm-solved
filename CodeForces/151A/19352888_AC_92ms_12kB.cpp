

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int  n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int res=(k*l)/nl;
    int res2=c*d;
    int res3=p/np;
    int kl=min(res,res2);
    int k2=min(kl,res3)/n;
    printf("%d\n",k2);
}
