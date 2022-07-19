#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int n;
int h1,h2,ne[N];
char e[N];
bool st[N];

int main()
{
    cin >> h1 >> h2 >> n;
    for(int i = 0;i < n;i ++)
    {
        int add,next;
        char data;
        cin >> add >> data >> next;
        e[add] = data;
        ne[add] = next;
    }
    for(int i = h1;~i;i = ne[i])
        st[i] = true;
    
    for(int i = h2;~i;i = ne[i])
        if(st[i])
        {
            printf("%05d\n",i);
            return 0;
        }
    puts("-1");
    return 0;

}