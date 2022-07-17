#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int a[N],s[N];

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i ++)
        cin >> a[i];
    
    for(int i = 1;i <= n;i ++)
        s[i] = s[i - 1] + a[i];
    
    while(m --> 0)
    {
        int l,r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << '\n';
    }
    return 0;
}