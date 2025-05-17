//https://www.luogu.com.cn/record/217577078
#include<bits/stdc++.h>
using namespace std;
int prime(int x)
{
    if(x<=1) return 0;
    if(x==2) return 1;
    for(int i=2;i<sqrt(x)+1;++i) if(x%i==0) return 0;
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    if(prime(x)) cout << x;
    else
    {
        for(int i=2;i<x;++i)
        {
            if(prime(i) && x%i==0 && prime(x/i))
            {
                cout << max(i,x/i);
                return 0;
            }
        }
    }
    return 0;
}
