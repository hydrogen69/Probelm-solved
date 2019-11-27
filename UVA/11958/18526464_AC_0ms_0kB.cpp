#include<bits/stdc++.h>

using namespace std;

int hour(string str)
{
    return ((str[0]-48)*10)+str[1]-48;
}
int minute(string str)
{
    return ((str[3]-48)*10)+str[4]-48;;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c,d,min=0,cases;
    cin>>cases;
    int cas=1;
    while(cases--)
    {
        cin>>n;
        string str;
        cin>>str;
        a=hour(str);
        b=minute(str);

        int i=1;
        while(n--)
        {

            cin>>str;
            int res,p;
            cin>>p;
            c=hour(str);
            d=minute(str);

            if(d<b )
            {
                res=(((d-b)+60)+p);
                a+=1;
            }

            else
                res=((d-b))+p;

            if(c<a)

                res+=((c-a)+24)*60;

            else
                res+=(c-a)*60;
            if(d<b)
                a-=1;
            if(i==1)
                min=res;
            else
            {
                if(res<min)
                    min=res;
            }
            i++;

        }
        printf("Case %d: %d\n",cas,min);
        cas++;
    }
}
