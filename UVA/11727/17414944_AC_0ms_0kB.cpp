#include<bits/stdc++.h>


using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[3];
    for (int i=0;i<n ;i++ )
    {
      for (int j=0;j<3 ;j++ )
      {
          cin>>arr[j];
      }
      sort(arr,arr+3);
       cout<<"Case "<<i+1<<": "<<arr[1]<<endl;

    }



    return 0;
}

