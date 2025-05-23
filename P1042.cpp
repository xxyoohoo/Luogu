//https://www.luogu.com.cn/record/218186379
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a[7000000],n=0,b[2]={11,21},w,l;
    char c;
    while(1)
    {
        cin >> c;
        if(c=='E') break;
        else if(c=='W') a[n++]=1;
        else a[n++]=0;
    }
    for(int i=0;i<2;++i)
    {
        w=0;
        l=0;
        for(int j=0;j<n;++j)
        {
            if (a[j] == 1) ++w;
            else ++l;
            if(max(w,l)>=b[i] && abs(w-l)>=2)
            {
                cout << w << ':' << l << endl;
                w=0;
                l=0;
            }
        }
        cout << w << ':' << l << endl;
        cout << endl;
    }
    return 0;
}


