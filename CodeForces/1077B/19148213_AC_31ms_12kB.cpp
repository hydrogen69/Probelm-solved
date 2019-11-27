#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++ )
        scanf("%d",&arr[i]);

    int res = 0;
    for (int i=2 ; i<n; i++ )
    {
        if (arr[i-2] == 1 && arr[i-1] == 0 && arr[i] == 1)
        {
            arr[i]=0;
            res++;
        }
    }
    printf("%d\n",res);
}
