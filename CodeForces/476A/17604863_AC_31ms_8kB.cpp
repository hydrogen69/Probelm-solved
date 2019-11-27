
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int temp = a/2 + a%2;

  
        while(temp <= a)
    {
        if(temp%b == 0)
        {
            break;
        }
        temp++;
    }

    printf(temp > a ? "-1\n" : "%d\n", temp);
    return 0;
}
