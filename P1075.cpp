[#include<iostream>
using namespace std;
int main()
{
    int n,m=0;
    cin >> n;
    while(n>1)
    {
        if(n==2)
        {
            cout << "2";
            return 0;
        }else if(n==3)
        {
            cout << "3";
            return 0;
        }
        for(int i=2;i<=n;++i)
        {
            if(n%i==0)
            {
                n/=i;
                m=i;
            }
        }
    }
    cout << m;
}
 

]