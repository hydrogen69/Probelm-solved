
#include<bits/stdc++.h>

using namespace std;

int main()
{

  string str1[20]={ "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};//0 to 19
  string str2[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
      int a;
      int temp;
      cin>>a;
      if(a<20)cout<<str1[a]<<endl;
      else
      {
          temp=a/10;
          cout<<str2[temp-2];
          if(a%10!=0)
            cout<<"-"<<str1[a%10];
          cout<<endl;

      }

}
