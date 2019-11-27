#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    string s;
    cin>>n>>s;
    int i=0,j=1;

    while(i<n)
    {
        cout<<s[i];
        j++;
        i+=j;
    }
    cout<<endl;
    }

