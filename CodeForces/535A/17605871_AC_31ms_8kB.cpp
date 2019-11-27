
#include<bits/stdc++.h>

using namespace std;

int main()
{

  string s1[20]={ "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};//0 to 19
  string s2[8]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
      int a;
      int temp;
      cin>>a;
      if(a<20)cout<<s1[a]<<endl;
      else
      {
          temp=a/10;
          cout<<s2[temp-2];
          if(a%10!=0)
            cout<<"-"<<s1[a%10];
          cout<<endl;

      }

}
