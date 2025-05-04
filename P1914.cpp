//https://www.luogu.com.cn/record/216005168
//https://vjudge.net/solution/60429452/jp3EXtlcqydnsUPeH9DS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    for(int i=0;i<s.length();++i) s[i]=(s[i]-'a'+n)%26+'a';
    cout << s;
    return 0;
}
