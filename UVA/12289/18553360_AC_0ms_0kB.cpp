#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    string str,temp="one";

   while(n--)
   {
    cin>>str;
    if(str.size()>3) printf("3\n");
    else
    {
        sum=0;
        for (int i=0;i<3 ;i++ )
        {
            if(str[i]==temp[i])
                sum++;
        }
       if(sum>=2)
                printf("1\n");
       else printf("2\n");
    }
   }
}
