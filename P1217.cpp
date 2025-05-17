//https://www.luogu.com.cn/record/217577130
#include<bits/stdc++.h>
using namespace std;
int prime(int x)
{
    if(x<=1) return 0;
    if(x==2) return 1;
    for(int i=2;i<sqrt(x)+1;++i) if(x%i==0) return 0;
    return 1;
}
int ipd(int x)
{
    int x2=x,y=0;
    while (x>0)
    {
        y=y*10+x%10;
        x/=10;
    }
    return x2==y;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin >> a >> b;
    for(int i=a;i<=b;++i)
    {
        if(ipd(i)&&prime(i)) cout << i << endl;
    }
}
