#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
cin>>t;
vector<int>num;
int temp;
for (int i=0;i<t ;i++ )
{
    cin>>temp;
    num.push_back(temp);

}
    sort(num.begin(),num.end());
    for (int i=0;i<num.size() ;i++ )
    {

        cout<<num[i]<<endl;
    }
        ;
}
