#include <bits/stdc++.h>

using namespace std;



int main ()
{
    int n,temp,flag;
       cin >> n;

        vector <int> num;

        for (int i=0; i<n; i++)
        {
            cin >> temp;
            num.push_back(temp);
        }

        sort (num.begin(),num.end());

        flag = 0;
        int a,b,c;
        for (int i=0; i<n-2; i++)
        {
            a = num[i];
            b = num[i+1];
            c = num[i+2];

            if (a+b > c && b+c > a && c+a > b)
            {
                flag = 1;
                cout << "YES" << endl;
                break;
            }
        }

        if (flag == 0)
            cout << "NO" << endl;


    return 0;
}
