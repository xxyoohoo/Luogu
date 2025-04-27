#include<bits/stdc++.h>
using namespace std;
char a[11][11],b[11][11],r90[11][11],r180[11][11],r270[11][11],fl[11][11];
int n;
int fix(int x)
{
    if(x==1) //R90
    {
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) r90[n-(j+1)][i]=a[i][j];
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(r90[i][j]!=b[i][j])return 1;
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) cout << r90[i][j] << " ";
        cout << endl;
        return 0;
    }
    if(x==2) //R180 (R90*2)
    {
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) r180[n-(j+1)][i]=r90[i][j];
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(r180[i][j]!=b[i][j])return 1;
        return 0;
    }
    if(x==3) //R270 (R90*3)
    {
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) r270[n-(j+1)][i]=r180[i][j];
        for(int i=0;i<n;++i) for(int j=0;j<n;++j)  if(r270[i][j]!=b[i][j])return 1;
        return 0;
    }
    if(x==4) //ry
    {
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) fl[i][n-j-1]=a[i][j];
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(fl[i][j]!=b[i][j])return 1;
        return 0;
    }
    if(x==5)
    {
        int work=0;
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) r90[n-(j+1)][i]=fl[i][j]; //r90+fl
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(r90[i][j]!=b[i][j]) work=1;
        if(work==0) return work;
        work=0;
        /* for(int i=0;i<n;++i) for(int j=0;j<n;++j) r180[n-(j+1)][i]=fl[i][j]; //r180+fl
        for(int i=0;i<n;++i)  for(int j=0;j<n;++j) if(r180[i][j]!=b[i][j]) work=1;
        return work;
        work=0;*/ 
        // ^ is equal to doing nothing ^
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) r270[n-(j+1)][i]=fl[i][j]; //r270+fl
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(r270[i][j]!=b[i][j]) work=1;
        return work;
    }
    if(x==6)
    {
        for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(a[i][j]!=b[i][j]) return 1;
        return 0;
    }
    return 1;
}
int main()
{
    cin >> n;
    int i;
    for(i=0;i<n;++i) for(int j=0;j<n;++j) cin >> a[i][j];
    for(i=0;i<n;++i) for(int j=0;j<n;++j) cin >> b[i][j];
    for(i=1;i<=7;++i) if(fix(i)==0){cout << i; return 0;}
    cout << 7;
    return 0;
}
