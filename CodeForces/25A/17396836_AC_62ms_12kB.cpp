#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>num;

    int a,ev=0,odd=0,k,l;
    for (int i=0;i<n ;i++ )
    {

        cin>>a;

        if(a%2==0)
        {
            ev++;
            k=i;
        }
        else
        {
            odd++;
            l=i;
        }


    }
        if(ev==1) cout<<k+1<<endl;
        else if(odd==1) cout<<l+1<<endl;


}
