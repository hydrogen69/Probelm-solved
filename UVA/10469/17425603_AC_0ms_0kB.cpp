#include<bits/stdc++.h>


using namespace std;
int main()
{
    int a,b;
    vector<int> val;
    while(cin>>a>>b)
    {
         bitset<32> binA(a);
         bitset<32>binB(b);


         for (int i=0;i<31 ;i++ )
         {
            if(binA.test(i)==0 && binB.test(i)==0) val.insert(val.begin(),0);
    else if(binA.test(i)==0 && binB.test(i)==1) val.insert(val.begin(),1);
    else if(binA.test(i)==1 && binB.test(i)==0)val.insert(val.begin(),1);
    else val.insert(val.begin(),0);
         }
         int sum=0;
        for (int i=val.size()-1;i>=0;i-- )
        {
            if(val[i]==1)
            {
                sum+=pow(2,val.size()-i-1);
            }

        }
            cout<<sum<<endl;
            val.clear();

    }



    return 0;
}

