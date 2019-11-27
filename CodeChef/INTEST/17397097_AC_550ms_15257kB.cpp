#include<iostream>

using namespace std;

int main()
{

   // int t;
  //  cin>>t;
  //  vector<int>num;
  int flag=0;
    int n,k;


        cin>>n>>k;
        int a;
        for (int j=0;j<n ;j++ )
        {
            cin>>a;
            if(a%k==0) flag++;
        }

        cout<<flag<<endl;





    return 0;
}
