#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> num;
    int n,temp;
    while(cin>>n)
    {
        for (int i=0; i<n ; i++ )
        {
            cin>>temp;
            num.push_back(temp);
        }
        sort(num.begin(),num.end());
        for (int i=0; i<num.size()-1 ; i++ )
        {
            cout<<num[i]<<" ";
        }
        cout<<num[num.size()-1]<<endl;
    }



    return 0;
}
