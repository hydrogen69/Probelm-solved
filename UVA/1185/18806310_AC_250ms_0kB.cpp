#include <bits/stdc++.h>
using namespace std;

int digits(long long n)
{
    if (n < 0)
        return 0;

    if (n <= 1)
        return 1;

    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);

    return floor(digits) + 1;
}

int main()
{
    long long m,n;
    cin>>m;
    while(m--)
    {
        cin>>n;
        cout<<digits(n)<<endl;
    }
    return 0;
}
