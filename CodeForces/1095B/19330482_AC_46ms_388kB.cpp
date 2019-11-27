#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n ;i++ )
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    printf("%d\n",min(arr[n-1]-arr[1],arr[n-2]-arr[0]));
}
