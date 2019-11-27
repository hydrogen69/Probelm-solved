#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s;

   cin>>s;

        while(s.size()!=0)
        {

        if(s[0]=='1' && s[1]!='4')
        s.erase (s.begin());

        else if(s[0]=='1' && s[1]=='4' && s[2]!='4')
        s.erase(0,2);
        else if(s[0]=='1' && s[1]=='4' && s[2]=='4')
            s.erase(0,3);
        else
        {
            printf("NO\n");
            break;
        }
        }

        if(s.size()==0) printf("YES\n");

}
