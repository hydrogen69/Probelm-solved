#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int cas=1;
    while(n--)
    {
        string str,str2,str3,str4;
        cin>>str>>str2>>str3>>str4;

    if(str4<str || str3>str2 )
        printf("Case %d: Hits Meeting\n",cas);
    else printf("Case %d: Mrs Meeting\n",cas);
        cas++;
    }

}
