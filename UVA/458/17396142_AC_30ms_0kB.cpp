#include<iostream>
#include<vector>
using namespace std;

int main()
{

    string str;
    while(getline(cin,str))
    {

    vector<char> ch;

    for (int i=0;i<str.size() ;i++ )
    {

        ch.push_back(str[i]-7);

    }
     for (int i=0;i<ch.size() ;i++ )
     {
         cout<<ch[i];
     }
         cout<<endl;

    }

}
