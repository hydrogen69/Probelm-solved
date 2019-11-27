#include<bits/stdc++.h>

using namespace std;
int main()
{

    int a;
    cin>>a;
    string s1[8]= {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    string temp,s2;
    cin>>temp;
    if(a==8)
        cout<<s1[0]<<endl;
    else if(a==6)
        cout<<s1[3]<<endl;
    else
    {
        for (int j=0; j<8 ; j++ )
        {
            s2=temp;
            if(j!=0 and j!=3)
            {

                for (int i=0; i<s2.size() ; i++ )
                {
                    if(s2[i]=='.')
                    {
                        s2[i]=s1[j][i];
                    }
                }
                if(s2==s1[j])
                {
                    cout<<s1[j]<<endl;
                    break;
                }
            }

        }
    }
}
