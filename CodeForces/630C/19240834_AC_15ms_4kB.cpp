#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d",&a);
    long long res=2;
    if(a==1)
        printf("2\n");
    else
    {
        for (int i=2; i<=a ; i++ )
        {
            res+=pow(2,i);
        }
        cout<<res<<endl;

    }
}


