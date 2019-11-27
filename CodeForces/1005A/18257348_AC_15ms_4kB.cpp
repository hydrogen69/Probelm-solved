#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c;
    vector<int>num;
        vector<int>num2;
    scanf("%d",&a);

    for (int i=0;i<a ;i++ )
    {
        cin>>b;
            num.push_back(b);

    }

    for (int i=1;i<num.size() ;i++ )
    {
        if(num[i]-num[i-1] !=1)
            num2.push_back(num[i-1]);
    }

    printf("%d\n",num2.size()+1);

    for (int i=0;i<num2.size() ;i++ )
    {
        printf("%d ",num2[i]);
    }
        printf("%d\n",num[num.size()-1]);

}
