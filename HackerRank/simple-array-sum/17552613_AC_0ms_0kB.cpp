#include<iostream>
#include<vector>
using namespace std;

int main()
{
int n;
scanf("%d",&n);
int sum=0,temp;;
for (int i=0;i<n ;i++ )
{
    scanf("%d",&temp);
    sum+=temp;
}
   printf("%d\n",sum);



}
