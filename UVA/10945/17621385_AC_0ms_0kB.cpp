#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str,temp;
   getline(cin,str);
   while(str!="DONE")
   {

   for (int i=0;i<str.size() ;i++ )
   {
       if(str[i]>='a' and str[i]<='z' or str[i]>='A' and str[i]<='Z')
        if(str[i]>='a' and str[i]<='z')temp+=str[i]-32;
        else temp+=str[i];
   }
   if(temp==string(temp.rbegin(),temp.rend()))
    cout<<"You won't be eaten!"<<endl;
   else printf("Uh oh..\n");
   getline(cin,str);
   temp.clear();

   }
    return 0;
}

