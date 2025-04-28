#include<bits/stdc++.h>
using namespace std;
char a[11][11],b[11][11],r90[11][11],r180[11][11],r270[11][11],fl[11][11];
int n;
int rot90(char (&aa)[11][11], char (&bb)[11][11])
{
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bb[n-(j+1)][i] = aa[i][j];
        }
    }
    return 1;
}
int flip(char (&aa)[11][11], char (&bb)[11][11])
{
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            bb[i][n-j-1]=aa[i][j];
        }
    }
    return 1;
}
bool same(char (&aa)[11][11], char (&bb)[11][11])
{
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (aa[i][j]!=bb[i][j]) return false;
        }
    }
    return true;
}

void printM(char (&aa)[11][11])
{
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << aa[i][j];
        }
        cout << endl;
    }
}
int main()
{
    cin >> n;
    int i,yes=0;
    for(i=0;i<n;++i) for(int j=0;j<n;++j) cin >> a[i][j];
    for(i=0;i<n;++i) for(int j=0;j<n;++j) cin >> b[i][j];
    printM(a);
    if (rot90(a,r90) && same(r90,b)) { cout << 1 << endl; return 0; }
    if (rot90(r90,r180) && same(r180,b)) { cout << 2 << endl; return 0; }
    if (rot90(r180, r270) && same(r270,b)) { cout << 3 << endl; return 0; }
    if (flip(a,fl) && same(fl,b)) {cout << 4 << endl; return 0;}
    if (rot90(fl,r90) && same(r90,b)) {cout << 5 << endl; return 0;}
    if (rot90(r90,r180) && same(r180,b)) { cout << 5 << endl; return 0; }
    if (rot90(r180, r270) && same(r270,b)) { cout << 5 << endl; return 0; }
    if (same(a,b)) {cout << 6 << endl; return 0;}
    cout << 7;
    return 0;
}
