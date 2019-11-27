#include<bits/stdc++.h>

using namespace std;
bool isPrime(int n)
{
    if(n==2) return true;
    else if(n%2==0) return false;
    for (int i=3;i<=sqrt(n) ;i+=2 )
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    string str;
   while( cin>>str)
   {
    int sum=0;
    for (int i=0;i<str.size() ;i++ )
    {
        if(str[i]>=97 && str[i]<='z')
            sum+=str[i]-96;
        else sum+=str[i]-38;
    }

    if(isPrime(sum)) printf("It is a prime word.\n");
    else printf("It is not a prime word.\n");
   }

}
