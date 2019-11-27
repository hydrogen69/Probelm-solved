#include<bits/stdc++.h>
using namespace std;
int main()
{

 int t,n,temp,val=0;;
 cin>>t;

 while(t--)
 {

 cin>>n;
 vector<int>num;
 vector<int>res;
 unordered_set<int> s;



 for (int i=0;i<n ;i++ )
 {
     cin>>temp;
     num.push_back(temp);
     s.insert(temp);

 }
  res.assign( s.begin(), s.end() );
  sort( res.begin(), res.end() );


    temp=0;
    int g=0;
     for (int i=0;i<res.size() ;i++ )
     {

         if(i==0)
         {
             val=count(num.begin(),num.end(),res[i]);
             temp=val;
             g=res[i];
         }
         else{
                val=count(num.begin(),num.end(),res[i]);
                    if(val>temp)
                    {
                        temp=val;
                        g=res[i];
                    }

         }

     }

      cout<< g<<" "<<temp<<endl;
    }
    return 0;

}
    //cout<<val<<"    "<<f<<endl;


