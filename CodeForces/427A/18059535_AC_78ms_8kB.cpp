#include <iostream>

using namespace std;
int main()
{
    int n,temp, p= 0, cr= 0;
    cin>>n;
    while(n--){
        cin>>temp;
        if(temp > 0) p+= temp;
        else if(p > 0){
            p--;
        }
        else cr++;
    }
    cout<< cr<<endl;
    return 0;
}
