#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int a[100000];
    int minx = 1e9;
    for(int i = 1;i <= n;i ++)
    {
        cin >> a[i];
        if(a[i] > 0)
            minx = min(minx,a[i]);
    }
    sort(a + 1,a + n + 1);
    while(k --)
    {
        for(int i = 1;i <= n;i ++)
            if(a[i] - minx > 0)
                minx = min(minx,a[i] - minx);
        if(a[n] - minx > 0)
            cout << minx << "\n";
        else 
            cout << "0\n";
        
    }
    return 0;
}