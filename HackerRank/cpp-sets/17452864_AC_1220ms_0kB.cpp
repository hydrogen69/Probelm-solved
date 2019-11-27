#include<bits/stdc++.h>


int main()
{

    std::set<int> s;
    std::set<int> ::iterator it;
    int n,a,b;
    std::cin>>n;
    std::vector<int> num;
    while(n--)
    {

        std::cin>>a;
        if(a==1)
        {
            std::cin>>b;
            s.insert(b);
        }
         else if(a==2)
         {
             std::cin>>b;
             s.erase(b);
         }
        else
        {
            std::cin>>b;
            it=s.find(b);
            if (it == s.end())
                std::cout<<"No"<<std::endl;
            else
                std::cout<<"Yes"<<std::endl;
        }
    }

    return 0;
}
