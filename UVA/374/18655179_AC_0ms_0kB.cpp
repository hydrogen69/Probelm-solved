#include<bits/stdc++.h>

using namespace std;
long long powerr(long long base, long long power,long long MOD) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) {
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2;
    }
    return result;
}
int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c)
    cout<<powerr(a,b,c)<<endl;
    return 0;
}
