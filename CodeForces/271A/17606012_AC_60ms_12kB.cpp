
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,f=0;
    cin>>a;

    int i=a;
    string temp;
    bool flag=true;

    while(flag)
    {
        i++;
        f=0;
        temp=to_string(i);
        sort(temp.begin(),temp.end());
        for (int i=1;i<4 ;i++ )
        {
            if(temp[i]==temp[i-1])
            {
                f=1;
                break;
            }

        }

        if(f==0) flag=false;

    }

    cout<<i<<endl;


}
