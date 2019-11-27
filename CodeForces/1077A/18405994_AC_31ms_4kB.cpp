#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b,k,i,sum=0;
        cin>>a>>b>>k;

        if(k%2==0)
            sum=(a-b)*(k/2);
        else
            sum=(a*((k/2)+1))-(b*(k/2));
        cout<<sum<<endl;

    }
}
