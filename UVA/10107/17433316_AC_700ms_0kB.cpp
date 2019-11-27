#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=1;
   vector<int>num;

    while(cin>>n)
    {
      num.push_back(n);
      sort(num.begin(),num.end());
      if(i==1) cout<<num[i-1]<<endl;
      else if(i==2) cout<<(num[0]+num[i-1])/2<<endl;
      else if(i%2==1 ) cout<<num[num.size()/2]<<endl;
      else if(i%2==0)
      {
          int c=num.size()/2;
          int d=(num.size()/2)-1;
          int res=(num[c]+num[d])/2;
          cout<<res<<endl;
          }
      i++;

    }
}
