#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n;

    cin>>n;
    long long arr[n];

    for(long long i=0; i<n; i++)
        cin>>arr[i];

    if(n<=2)
    printf("%d\n",n);
    else
    {

        long long i=0,a=0,b=2;
        while(i<=n-2)
        {
            if(arr[i+2]==arr[i]+arr[i+1])
            {
                b++;
                i++;
            }
            else
            {
                a=max(a,b);
                b=2;
                i++;
            }
        }

        a=max(a,b);
        printf("%d\n",a);
    }

    return 0;
}
