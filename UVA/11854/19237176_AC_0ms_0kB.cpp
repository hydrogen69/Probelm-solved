#include<bits/stdc++.h>

using namespace std;

int main()
{
    int f=1;
    while(f)
    {

    int arr[3];
    for (int i=0;i<3 ;i++ )
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]==0 && arr[0]==0 && arr[1]==0)
        return 0;
    else f=1;
        sort(arr,arr+3);
        int res=arr[0]*arr[0]+arr[1]*arr[1];
       int n=arr[2]*arr[2];
        if(n==res)
            printf("right\n");
        else printf("wrong\n");
    }
}
