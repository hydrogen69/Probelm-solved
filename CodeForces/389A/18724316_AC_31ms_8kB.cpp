#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,res=0;
    scanf("%d",&n);
    int minimum=100;

    for (int i=0;i<n; i++ )
    {
       scanf("%d",&temp);
        if(i==0)
            res=temp;
        else
            res=__gcd(temp,res);
    }
  printf("%d\n",n*res);
}
