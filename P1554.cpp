#include<bits/stdc++.h>
using namespace std;
int a[10]={0},x,y;
int digit(int x)
{
    while (x!=0)
    {
        a[x%10]++;
        x/=10;
    }
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    for(int i=min(x,y);i<=max(x,y);++i) digit(i);
    for(int i=0;i<10;++i) cout << a[i] << ' ';
    return 0;
}
