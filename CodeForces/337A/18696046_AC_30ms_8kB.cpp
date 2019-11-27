#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,temp;
   cin>>a>>b;
   vector<int>num;
   for (int i=0;i<b ;i++ )
   {
       cin>>temp;
       num.push_back(temp);
   }
   int res=1000;
   sort(num.begin(),num.end());
   for (int i=0;i<b ;i++ )
   {
       if(i+a-1<b )
        {int m=num[i+a-1];
        int n=num[i];
        if(m-n<res)
            res=m-n;
        }

   }
       printf("%d\n",res);

}
