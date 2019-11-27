
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    string str;
    while(a--)
    {
       cin>>str;

        if(str=="donate")
        {
            scanf("%d",&b);
            sum+=b;
        }
        else
            printf("%d\n",sum);

    }
    ;
}
