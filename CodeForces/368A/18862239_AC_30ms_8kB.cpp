
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,x,sum=0,m;
    vector<int>num;
    scanf("%d %d",&n,&d);
    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&x);
        sum+=x;
        num.push_back(x);
    }
    sort(num.begin(),num.end());

    scanf("%d",&m);


    if(m<n)
    {
        sum=0;
        for (int i=0; i<m ; i++ )
        {
            sum+=num[i];

        }
        printf("%d\n",sum);
    }

    else

        printf("%d\n",sum-(m-n)*d);
}
