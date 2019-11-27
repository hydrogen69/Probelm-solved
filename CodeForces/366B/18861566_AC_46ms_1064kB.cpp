#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,temp,sum=0,f=0,res=0;
    scanf("%d %d",&n,&a);
    vector<int> num;

    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&temp);
        num.push_back(temp);
        if(i==0 || i-f==a)
        {
            sum+=temp;
            f=i;
        }

    }
    long long sumTemp=0;
    int v=n/a;

    for (int i=1; i<a ; i++ )
    {
        int j=i;
        while(j<=n)
        {
            sumTemp+=num[j];
            j+=a;

        }
        if(sumTemp<sum)
        {
            res=i;
            sum=sumTemp;
        }

        sumTemp=0;

    }
    printf("%d\n",res+1);


}
