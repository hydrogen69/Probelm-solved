#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string str;
    cin>>str;
    int i=1;
    while(str!="*")
    {
        if(str=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",i);
        else
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
        cin>>str;
    }

}
