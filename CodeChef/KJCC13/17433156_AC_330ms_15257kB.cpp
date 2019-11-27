#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {

    int temp,temp2;
    cin>>temp>>temp2;
    int a,b;
     if(temp<temp2)
     {
         a=temp;
         b=temp2;

     }
     else
     {
         a=temp2;
         b=temp;
     }
    int c=abs(b-a)+1;
    int f=0;
    string str;
    for (int i=a;i<=b;i++ )
    {
        str=to_string(i);
    size_t  found=str.find('0');
  if (found!=std::string::npos)

        f++;
    }
        cout<<f<<"/"<<c<<endl;
}
}
