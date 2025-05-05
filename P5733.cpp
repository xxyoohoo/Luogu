//https://www.luogu.com.cn/record/216012542
//https://vjudge.net/solution/60431581/lc0YMhzBiA8WatkH4JHv
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i) if(s[i]>='a'&&s[i]<='z') s[i]=s[i]+('A'-'a');
    cout << s;
    return 0;
}
