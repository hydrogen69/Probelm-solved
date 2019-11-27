#include<iostream>

using namespace std;
bool vowel(char c)
{
    int Vl = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    int UVl = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    return Vl || UVl;
}
void print(string temp)
{
    if(vowel(temp[0]))
        cout<<temp<<"ay";
    else
    {
        for (int j=1; j<temp.size() ; j++ )
            cout<<temp[j];
        cout<<temp[0]<<"ay";
    }
}
int main()
{
    string str;
    while(getline(cin,str))
{


    string temp;
    for (int i=0; i<str.size() ; i++ )
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' and str[i]<='Z')
            temp+=str[i];
        else
        {
            if(!temp.empty())
            print(temp);
            temp.clear();
            cout<<str[i];
        }
    }
     if(!temp.empty())
    print(temp);
    cout<<endl;
}
    return 0;
}
