
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a;
   cin>>a;

   int i=1;
   string str="1";
   string temp;

   while(str.size()<=a)
   {
       i++;
       temp=to_string(i);
       str+=temp;
   }
   cout<<str[a-1]<<endl;
}
