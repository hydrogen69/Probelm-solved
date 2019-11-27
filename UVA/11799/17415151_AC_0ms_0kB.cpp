#include<bits/stdc++.h>


using namespace std;
int main()
{

    int n;
    cin>>n;
    int num,temp;;
    int value=0;
    for (int i=0;i<n ;i++ )
    {
        cin>>num;

        cin>>value;
      for (int j=0;j<num-1 ;j++ )
      {
          cin>>temp;
         if(temp>value)value=temp;
      }

       cout<<"Case "<<i+1<<": "<<value<<endl;
       value=0;

    }

    return 0;
}

