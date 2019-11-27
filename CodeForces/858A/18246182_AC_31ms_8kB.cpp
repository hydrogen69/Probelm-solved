#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c=1;
    cin>>a>>b;
    while(b--)
        c*=10;
    cout<<(a*c)/__gcd(a,c)<<endl;

}
