#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,temp;
    cin>>str;
    while (str!="#")
    {
        if (next_permutation(str.begin(), str.end()))
            cout << str << endl;
        else
            cout<<"No Successor"<<endl;
        cin>>str;
    }
}
