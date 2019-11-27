
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,count=0;
    cin>>a>>b>>c;
    int s=b;
    while(s<=c)
    {
        if(s%a==0)count++;
        s+=b;
    }
   cout<<count<<endl;

}
