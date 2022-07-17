#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;
int q[N],tmp[N];
LL merge_sort(int l,int r)
{
    if(l >= r)  return 0;
    int mid = l + r >> 1;
    LL res = merge_sort(l , mid) + merge_sort(mid + 1,r);
    int i = l,j = mid + 1,k = 0;
    while(i <= mid && j <= r)
        if(q[i] <= q[j]) tmp[k ++] = q[i ++];
        else 
        {
            res += mid - i + 1;
            tmp[k ++]= q[j ++];
        }
    while(i <= mid) tmp[k ++] = q[i ++];
    while(j <= r) tmp[k ++] = q[j ++];
    for(int i = l,j = 0;i <= r;i ++,j ++)
        q[i] = tmp[j];
    return res;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i ++) 
        cin >> q[i];
    cout << merge_sort(0,n - 1);
    return 0;
}
