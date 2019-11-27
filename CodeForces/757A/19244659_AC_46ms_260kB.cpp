#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2="Bulbasaur";
    cin>>str;
    int s=str.size();
    vector<int>sr;

    for (int i=0;i<9 ;i++ )
    {
        if(i==4 || i==1)
        sr.push_back(count(str.begin(),str.end(),str2[i])/2);
        else  sr.push_back(count(str.begin(),str.end(),str2[i]));
    }

    int res=*min_element(sr.begin(),sr.end());
    printf("%d\n",res);

}
