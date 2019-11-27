#include<bits/stdc++.h>
using namespace std;
string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int main()
{
   int t;cin>>t;
   while(t--)
   {

    int n;
    cin>>n;
    string bin=toBinary(n);
    int a=count(bin.begin(),bin.end(),'1');
    cout<<a<<" ";
     string str=to_string(n);

    istringstream(str) >> hex >> n;
    bin=toBinary(n);
    int b=count(bin.begin(),bin.end(),'1');
    cout<<b<<endl;

   }

  return 0;
}


