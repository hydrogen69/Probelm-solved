#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>num;

    int a,b;
    for (int i=0;i<n ;i++ )
    {

        cin>>a>>b;
        num.push_back(a%b);

    }

    for (int i=0;i<n ;i++ )
    {
        cout<<num[i]<<endl;
    }
        ;
}
