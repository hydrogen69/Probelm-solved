#include <string>
#include <iostream>

using namespace std;

int main()
{

    string str;
    int n;
    cin>>n;

    while(n--)
    {

        cin>>str;
        if(str.size()>3)
            cout<<"3"<<endl;
        else
        {
            if(str[0]=='o' && str[2]=='e')
                cout<<"1"<<endl;
            else if(str[0]=='o' && str[1]=='n')
                cout<<"1"<<endl;
            else if(str[1]=='n' && str[2]=='e')
                cout<<"1"<<endl;
            else cout<<"2"<<endl;

        }

    }


    return 0;
}
