#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
int main()
{
    int n;
    double res,r;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%lf", &r);
        res=((r+r)*(r+r))-(PI*r*r);
        printf("Case %d: %.2lf\n",i,res);
    }
    return 0;
}
