#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a;
   cin>>a;
   int i=1;
   if(a%2==0)
   {
       while(i<a)
       {
           if(i==1)
               cout<<i+1<<" "<<i;
            else cout<<" "<<i+1<<" "<<i;
           i+=2;
       }
       cout<<endl;
   }
   else cout<<"-1"<<endl;
    return 0;
}
