#include<bits/stdc++.h>

using namespace std;

bool prime[1000000];
void isPrime()
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000000; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*p; i<=1000000; i += p)
                prime[i] = false;
        }
    }


}
int main()
{
    isPrime();
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string str;
   while(cin>>str)
   {

    stringstream s(str);

    long long m,n;
    s >> m;

    reverse(str.begin(),str.end());
    stringstream ss(str);
    ss >> n;

    if(prime[m] && prime[n] && m!=n)
        cout<<m<<" is emirp."<<endl;
    else if(!prime[m])
        cout<<m<<" is not prime."<<endl;
    else cout<<m<<" is prime."<<endl;

}
}
