#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    set<char>ch;
    getline(cin,str);


    int size=str.size();
    for (int i=1;i<size-1 ;i++ )
    {
        if(str[i]>='a' && str[i] <='z')
            ch.insert(str[i]);
    }
        printf("%d\n",ch.size());

}
