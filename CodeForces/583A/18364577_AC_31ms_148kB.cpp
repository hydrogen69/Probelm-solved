#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,a,b;
    cin>>n;
    vector<int> x;
    vector<int> y;
    vector<int> res;

    for (int i=1; i<=n*n ; i++ )
    {
        cin>>a>>b;
        if(i==1)
        {
            res.push_back(i);
            x.push_back(a);
            y.push_back(b);
        }
        else
        {
            if(count(x.begin(),x.end(),a)==0 && count(y.begin(),y.end(),b)==0 )
            {
                y.push_back(b);
                x.push_back(a);
                res.push_back(i);
            }

        }
    }

    for (int i=0; i<res.size()-1 ; i++ )
    {
        printf("%d ",res[i]);
    }
    printf("%d\n",res[res.size()-1]);

}
