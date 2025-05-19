//https://www.luogu.com.cn/record/217747404
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin >> a >> b;
    vector<int> ans(a.size()+b.size(),0);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<a.size();++i)
    {
        for(int j=0;j<b.size();++j)
        {
            ans[i+j]+=(a[i]-'0')*(b[j]-'0');
            ans[i+j+1]+=ans[i+j]/10;
            ans[i+j]%=10;
        }
    }
    while(ans.size()>1&&ans.back()==0) ans.pop_back();
    for(int i=ans.size()-1;i>=0;--i) cout << ans[i];
    return 0;
}
