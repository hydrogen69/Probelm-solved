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
        int a;
        cin>>a;
        vector<int>temp2;
        for (int i=0; i<2 ; i++ )
        {
            cin>>temp;
            temp2.push_back(temp);
        }
        num.erase(num.begin()+(a-1));
        num.erase(num.begin()+(temp2[0]-1),num.begin()+(temp2[1]-1));

       cout<<num.size()<<endl;
        for (int i=0; i<num.size()-1 ; i++ )
        {
            cout<<num[i]<<" ";
        }
        cout<<num[num.size()-1]<<endl;
    }



    return 0;
}
