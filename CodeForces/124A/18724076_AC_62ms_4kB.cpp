#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    scanf("%d %d %d",&n,&a,&b);
    printf("%d\n",min(n - a, b + 1));
    return 0;
}
