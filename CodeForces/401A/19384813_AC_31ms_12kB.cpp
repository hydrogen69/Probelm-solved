#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,res=0,temp;
   scanf("%d %d",&a, &b);
   for (int i=0;i<a ;i++ )
       {
        scanf("%d",&temp);
        res+=temp;
       }
    if(res%b==0)
        printf("%d\n",abs(res/b));
    else printf("%d\n",abs(res/b)+1);
}
