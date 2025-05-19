#include<bits/stdc++.h>
using namespace std;
string mlt(string a, string b)
{
    string s;
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
    string s;
    for(int i=ans.size()-1;i>=0;--i) s+=(ans[i]+'0');
    return s;
}
string add(string a, string b)
{ 
    string s;
    int x=0;
    vector<int> ans;
    if (b.size()>a.size())swap(a,b);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for (int i=0;i<a.size();++i)
    {
        a[i]-='0';
        b[i]=(i<b.size())?b[i]-'0':0;
        ans.push_back((a[i]+b[i]+x)% 10);
        x=(a[i]+b[i]+x)/10;
    }
    if(x) ans.push_back(x);
    for (int i=ans.size()-1;i>=0;--i) s+=(ans[i]+'0');
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string sm="0";
    string ft="1";

    for (int i=1;i<=n;++i)
    {
        ft=mlt(ft,to_string(i));
        sm=add(sm,ft);
    }
    cout << sm << '\n';
    return 0;
}
