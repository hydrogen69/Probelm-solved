#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin>>n;

    vector<int> num;
    for (int i=0;i<n ;i++ )
    {

        int a,b;

       cin>>a>>b;

       num.push_back(a+b);


    }

    for (int i=0;i<n ;i++ )
    {

         cout<<"Case "<<i+1<<": "<<num[i]<<endl;
    }
        ;

}