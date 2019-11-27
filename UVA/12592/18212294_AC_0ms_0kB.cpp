#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
   scanf("%d",&n);

 char s1[100][100];
 char s2[100][100];
    char temp[100];
 for (int i=0;i<n ;i++ )
 {
    scanf(" %[^\t\n]s",&s1[i]);
    scanf(" %[^\t\n]s",&s2[i]);
 }
     scanf("%d",&n);
     for (int i=0;i<n ;i++ )
     {
         scanf(" %[^\t\n]s",&temp);

         for (int j=0;j<100 ;j++ )
         {
             if(strcmp(s1[j],temp)==0)
             {
                cout<<s2[j]<<endl;
                break;
             }
         }
             ;
     }
         ;
}

