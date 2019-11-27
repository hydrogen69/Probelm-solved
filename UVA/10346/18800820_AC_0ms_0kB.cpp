#include<bits/stdc++.h>

using namespace std;
int cig(int x,int y)
{
    int sum=x;

   while(x>=y)
   {
     sum+=x/y;
    x=(x%y)+(x/y);
   }

   return sum;
}

int main()
{
    int a,b,res=0;

    while(cin>>a>>b)
    {
    cout<<cig(a,b)<<endl;
    }

}
