//https://www.luogu.com.cn/record/217577085
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
    for(int i=4;i<=x;i+=2)
    {
        for(int j=2;j<i;++j)
        {
            if(prime(j)&&prime(i-j))
            {
                cout << i << '=' << j << '+' << i-j << endl;
                break;
            }
        }
    }
    return 0;
}
