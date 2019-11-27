#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<double>axis;

    double temp,x,y;
    while(cin>>temp)
    {
        axis.push_back(temp);


        for (int i=0; i<7 ; i++ )
        {
            cin>>temp;
            axis.push_back(temp);
        }

         if(axis[0]==axis[4] && axis[1]==axis[5]){
            x=axis[2]+axis[6]-axis[4];
            y=axis[3]+axis[7]-axis[5];
        }else if(axis[0]==axis[6] && axis[1]==axis[7]){
            x=axis[2]+axis[4]-axis[6];
            y=axis[3]+axis[5]-axis[7];
        }else if(axis[2]==axis[4] && axis[3]==axis[5]){
            x=axis[0]+axis[6]-axis[4];
            y=axis[1]+axis[7]-axis[5];
        }else{
            x=axis[0]+axis[4]-axis[6];
            y=axis[1]+axis[5]-axis[7];
        }


        printf("%.3f %.3f\n",x,y);
        axis.clear();
    }
}
