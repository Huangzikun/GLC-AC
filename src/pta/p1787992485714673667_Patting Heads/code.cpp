#include <cstdio>
#include <iostream>

using namespace std;

const int N = 1e6+10;

int n;
int arr[N], cnt[N], ans[N];

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;
    }

    for(int i=1; i<N; i++)
        for(int j=i; j<N; j+=i)
            ans[j] += cnt[i];

    for(int i=0; i<n; i++) printf("%d\n", ans[arr[i]] - 1);

    return 0;
}