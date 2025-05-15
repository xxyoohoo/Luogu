//https://vjudge.net/solution/60653888/ve2lxMjvXaXPd0oODm74
//https://www.luogu.com.cn/record/217185540
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,z;
    string s,s1;
    cin >> n >> s;
    for(int i=0;i<n;++i)
    {
        cin >> x;
        if(x==1)
        {
            cin >> s1;
            s.append(s1);
            cout << s << endl;
        }
        else if(x==2)
        {
            cin >> y >> z;
            s=s.substr(y,z);
            cout << s << endl;
        }
        else if(x==3)
        {
            cin >> y >> s1;
            s.insert(y,s1);
            cout << s << endl;
        }
        else if(x==4)
        {
            cin >> s1;
            cout << (int)s.find(s1) << endl;
        }
    }
    return 0;
}
