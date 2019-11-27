#include<bits/stdc++.h>

using namespace std;

map<string,string> str;
map<string, string>::iterator it;

int main()
{
    int n,f=1;
    cin>>n;

   string temp1,temp2;
  for(int i = 0; i < n; ++i)
    {
        cin >> temp1 >> temp2;

            for( it = str.begin(); it!=str.end(); ++it)
            {
                if(it->second == temp1)
                {
                     it->second = temp2;
                     f = 0;
                     break;
                }
            }
            if(f==1) str[temp1] = temp2;
            f=1;

    }
       cout<<str.size()<<endl;
    for( it = str.begin(); it!=str.end(); ++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
