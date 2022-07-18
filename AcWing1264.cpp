#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n,m;
int a[N],tr[N];

int lowbit(int x)
{
    return x & -x;
}

void add(int x,int v)
{
    for(int i = x;i <= n;i += lowbit(i))
        tr[i] += v;
}

int query(int x)
{
    int res = 0;
    for(int i = x;i;i -= lowbit(i))
        res += tr[i];
    return res;
}

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i ++)
        cin >> a[i];
    for(int i = 1;i <= n;i ++)
        add(i,a[i]);
    
    while(m --)
    {
        int k,x,y;
        cin >> k >> x >>y;
        if(k == 0) printf("%d\n",query(y) - query(x - 1));
        else add(x,y);
    }
    return 0;
}