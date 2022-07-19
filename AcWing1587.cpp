#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n;
int h,e[N],ne[N];
bool st[N];

int main()
{
    cin >> h >> n;
    for(int i = 0;i < n;i ++)
    {
        int add,data,next;
        cin >> add >> data >> next;
        e[add] = data;
        ne[add] = next;
    }
    vector<int> a,b;
    for(int i = h;~i;i = ne[i])
    {
        int v = abs(e[i]);
        if(st[v]) b.push_back(i);
        else
        {
            st[v] = true;
            a.push_back(i);
        }
    }

    for(int i = 0;i < a.size();i ++)
    {
        printf("%05d %d ",a[i],e[a[i]]);
        if(i + 1 == a.size()) puts("-1");
        else printf("%05d\n",a[i + 1]);
    }
    for(int i = 0;i < b.size();i ++)
    {
        printf("%05d %d ",b[i],e[b[i]]);
        if(i + 1 == b.size()) puts("-1");
        else printf("%05d\n",b[i + 1]);
    }

}