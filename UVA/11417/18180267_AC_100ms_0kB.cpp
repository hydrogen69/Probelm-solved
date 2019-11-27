#include<bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    scanf("%d",&N);
    while(N!=0)
    {

    int G=0;
    for(int i=1; i<N; i++)
        for(int j=i+1; j<=N; j++)
        {
            G+=__gcd(i,j);
        }
    printf("%d\n",G);
    scanf("%d",&N);
    }
}
