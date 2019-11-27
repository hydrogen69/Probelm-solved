#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    vector<int>b;
    int num;

    while(cin>>num)
    {
        if(find(a.begin(),a.end(),num)==a.end())
            a.push_back(num);
        b.push_back(num);

    }
    for (int i=0; i<a.size() ; i++ )
    {
        cout<<a[i]<<" "<<count(b.begin(),b.end(),a[i])<<endl;
    }
    
    return 0;
}
