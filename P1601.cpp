//https://www.luogu.com.cn/record/217744978
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char a1[1000],b1[1000];
    unsigned long long x=0,lc=1,a[1000],b[1000],c[1000];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    cin >> a1 >> b1;
    for(int i=0;i<strlen(a1);++i) a[strlen(a1)-i]=a1[i]-48;
    for(int i=0;i<strlen(b1);++i) b[strlen(b1)-i]=b1[i]-48;
    while(lc<=strlen(a1)||lc<=strlen(b1))
    {
        c[lc]=a[lc]+b[lc]+x;
        x=c[lc]/10;
        c[lc]%=10;
        lc++;
    }
    c[lc]=x;
    if(c[lc]==0) lc--;
    for(int i=lc;i>=1;--i) cout << c[i];
    cout << endl;
    return 0;
}


