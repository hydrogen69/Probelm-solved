#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string str,str2;
    cin>>str>>str2;

    if(str==string(str2.rbegin(),str2.rend()))
        printf("YES\n");
    else printf("NO\n");

}
