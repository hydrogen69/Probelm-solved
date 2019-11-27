#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b;
  cin >> t;
   while(t--)
   {
        b = 0;
        cin >> a;
        if(a > 10) b=a-10;
        cout<<b<<" "<<a-b<<endl;
   }

  return 0;
}
