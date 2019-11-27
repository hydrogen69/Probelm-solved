#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,b;
   cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
      cin>>num[i];
    }
    sort(num,num+n);
    long long int res=num[0]+num[1];
    printf("%lld\n",res);
  }
  return 0;
}
