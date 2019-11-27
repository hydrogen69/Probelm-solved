#include<bits/stdc++.h>

using namespace std;
int arr[1000000], sp(0);
void s1(int a,int b)
{arr[a-1] = b - sp;}
void s2(int b)
{
     sp += b;
}
void s3(int b)
{printf("%d\n",arr[b-1]+sp);
}
int main()
{
   int a,b,x,y,z;
   scanf("%d %d",&a,&b);

   for (int i=0;i<a ;i++ )
    scanf("%d",&arr[i]);
       for (int i=0;i<b ;i++ )
       {
           scanf("%d",&x);
           if(x==1)
           {
               scanf("%d %d",&y,&z);
            s1(y,z);
           }
        else if(x==2)
        {
            scanf("%d",&y);
            s2(y);
        }
        else
        {

            scanf("%d",&y);
            s3(y);
        }
        }
       }


