#include<iostream>
using namespace std;
int main()
{
    double n,s=0,x=2;
    cin >> n;
    for(int i=1;i<=200000;++i)
    {
        if(s+x>n)
        {
            cout << i;
            break;
        }
        s+=x;
        x*=0.98;
    }
    return 0;
}