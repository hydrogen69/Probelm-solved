#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,flag=0;
  cin >> t;
  cin>>a;
  int arr[t];
  for (int i=0;i<t ;i++ )
  {

      cin>>arr[i];
  }

    for (int i=0;i<t-1 ;i++ )
    {
        for (int j=i+1;j<t ;j++ )
        {
            if((arr[i]+arr[j])%a==0) flag++;
        }
            ;

    }
        cout<<flag<<endl;

  return 0;
}
