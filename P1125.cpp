//https://www.luogu.com.cn/record/216025595
//https://vjudge.net/solution/60433476/HbUCS8MwxFUn47CM5uKG
#include <bits/stdc++.h>
using namespace std;
string s;
int a[30]={0},mx=0,mn=101,x;
bool prime(int z)
{
    if(z<=1) return 0;
    if(z==2) return 1;
    for(int i=2;i<sqrt(z)+1;++i) if(z%i==0) return 0;
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for(int i=0;i<s.length();++i)
    {
        a[s[i]-'a']++;
        if(a[s[i]-'a']>mx) mx=a[s[i]-'a'];
        if(a[s[i]-'a']<mn || x==s[i]-'a') {mn=a[s[i]-'a']; x=s[i]-'a';}
    }
    if(prime(mx-mn)) cout << "Lucky Word" << '\n' << mx-mn;
    else cout << "No Answer" << '\n' << 0;
    return 0;
}
