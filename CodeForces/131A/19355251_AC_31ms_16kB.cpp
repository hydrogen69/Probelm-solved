#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string str;
    cin>>str;

    int s=str.size(),f=0;
    if(s==1)
    {
        if(str[0]<97)
                printf("%c",str[0]+32);
        else printf("%c",str[0]-32);
    }
    else
    {

    for (int i=1;i<s ;i++ )
    {
        if(str[i]>=97)
        {
            f=1;
            break;
        }
    }
        if(f==1)
           cout<<str<<endl;
        else
        {
            if(str[0]<97)
                printf("%c",str[0]+32);
            else printf("%c",str[0]-32);
            for (int i=1;i<s ;i++ )
            {
                if(str[i]<='Z')
                    printf("%c",str[i]+32);
                else printf("%c",str[i]);
            }

        }
    }

}
