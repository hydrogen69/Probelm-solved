#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> res;

    int b;
    for (int j=0;j<n ;j++ )
    {
     vector<int>num;
    for (int i=0; i<3 ; i++ )
    {
        cin>>b;
        num.push_back(b);
    }
    sort(num.begin(),num.end());
    res.push_back(num[1]);
    }

    for (int i=0;i<n ;i++ )
    {
        cout<<res[i]<<endl;
    }
       


}
