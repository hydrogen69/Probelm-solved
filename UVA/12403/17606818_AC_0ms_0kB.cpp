
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>num;
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
           num.push_back(sum);

    }
    for (int i=0;i<num.size() ;i++ )
    {
        printf("%d\n",num[i]);
    }
        ;

}
