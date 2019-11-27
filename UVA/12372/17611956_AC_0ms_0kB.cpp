#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int a,b,c,f=0;
  int i=1;
 int k;
 cin>>k;
  while(i<=k)
  {
   cin>>a>>b>>c;

  if(a<=20 and b<=20 and c<=20) cout<<"Case "<<i<<": "<<"good"<<endl;
  else cout<<"Case "<<i<<": "<<"bad"<<endl;

  i++;
  }

    return 0;
}
