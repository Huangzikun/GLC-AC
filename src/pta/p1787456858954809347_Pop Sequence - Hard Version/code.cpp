#include <iostream>

using namespace std;

const int N = 30;

int n, k;
int a[N];
int tmp[N];
int stk[N], tt; //数组模拟栈

bool dfs(int u, int tar)
{
    if(u >= n) return tt < 0;
    if(tar > n) return false;

    // 尝试直接弹出（入栈后直接弹出）是否可以操作完
    if(tmp[u] == a[tar] && dfs(u + 1, tar + 1)) return true;
    // 否则尝试弹出当前栈顶（不入栈）是否可以操作完
    if(tt >= 0 && tmp[u] == stk[tt])
    {
        int t = stk[tt -- ];
        if(dfs(u + 1, tar)) return true;
        stk[ ++ tt] = t;    // 恢复操作
    }
    // 否则入栈
    stk[ ++ tt] = a[tar];
    if(dfs(u, tar + 1)) return true;
    tt -- ;     // 恢复操作
    return false;
}

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    
    scanf("%d", &k);
    while(k -- )
    {
        for(int i=0; i<n; i++) scanf("%d", &tmp[i]);
        tt = -1;
        if(dfs(0, 0)) puts("Yes");
        else puts("No");
    }

    return 0;
}