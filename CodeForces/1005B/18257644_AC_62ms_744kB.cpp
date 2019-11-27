#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;

    cin>>s1>>s2;

    int f=s1.size();
    int sec=s2.size();

    while(f && sec)
    {
            if(s2[sec-1]!=s1[f-1])

            break;
            else
            {sec--;
            f--;}

    }

    cout<<f+sec<<endl;
}
