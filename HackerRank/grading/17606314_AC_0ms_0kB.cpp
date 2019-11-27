
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    while(a--)
    {

        cin>>b;
        if(b>=38){
        if((b+2)%5==0)cout<<b+2<<endl;
        else if((b+1)%5==0)cout<<b+1<<endl;
        else cout<<b<<endl;
        }
        else cout<<b<<endl;
    }
}
