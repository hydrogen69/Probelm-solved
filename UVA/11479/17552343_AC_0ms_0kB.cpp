#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[3];
    int i=1;
    while(n--)
    {
       cin>>arr[0]>>arr[1]>>arr[2];


        sort(arr,arr+3);

        if(arr[2]>=arr[0]+arr[1] || arr[0]<=0)
            printf("Case %d: Invalid\n",i);
        else if(arr[0]==arr[1]&&arr[1]==arr[2])
            printf("Case %d: Equilateral\n",i);

        else if(arr[0]==arr[1] || arr[1]==arr[2])
            printf("Case %d: Isosceles\n",i);
        else
            printf("Case %d: Scalene\n",i);
        i++;
    }
    return 0;
}
