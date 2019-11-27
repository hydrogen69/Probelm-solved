#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a;
   cin>>a;
   vector<int>num;
   vector<int>temp2;

   int temp;

   while(a--)
   {
       int i=10;
       while(i--)
       {
           cin>>temp;
           num.push_back(temp);
       }
       if(num[0]<num[1])
          {

       if(is_sorted(num.begin(),num.end()))temp2.push_back(1);
       else temp2.push_back(2);
          }
       else
       {
            if(is_sorted(num.rbegin(),num.rend()))temp2.push_back(1);
       else temp2.push_back(2);
       }

       num.clear();
   }
   printf("Lumberjacks:\n");
   for (int i=0;i<temp2.size() ;i++ )
   {
       if(temp2[i]==1)printf("Ordered\n");
       else printf("Unordered\n");
   }
       ;
}
