#include<bits/stdc++.h>

using namespace std;

int arr[1000];
int main()
{
    int n,temp,res=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&temp);
        arr[temp]+=1;

        if(res<arr[temp])
            res=arr[temp];

    }
    printf("%d\n",n-res);


}
