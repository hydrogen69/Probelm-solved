#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int n;
    cin>>n;
    while(n--)
    {



        double x,y,z;
        cin>>x;

        y=(x*6)/10;
        z=x/5;

        double areofC=pi*z*z;
        double area=(x*y)-areofC;
        printf("%.2f %.2f\n",areofC,area);
    }


    return 0;
}
