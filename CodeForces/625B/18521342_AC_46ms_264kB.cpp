
#include <iostream>
#include <string>
using namespace std;

int subStr(string str1,string str2)
{
    int count = 0;
   std::string::size_type pos = 0;

    while ((pos = str1.find(str2, pos )) != std::string::npos) {
            count++;
          pos +=str2.length();
   }
   return count;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<subStr(str1,str2)<<endl;
    return 0;
}
