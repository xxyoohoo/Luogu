//https://www.luogu.com.cn/record/217184275
//https://vjudge.net/solution/60653531/RUNvhXVnzY6gT2toanHm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int x=0;
    getline(cin,s);
    for(int i=0;i<s.size();++i) if(s[i]!=' '&&s[i]!='\n') ++x;
    cout << x;
    return 0;
}
