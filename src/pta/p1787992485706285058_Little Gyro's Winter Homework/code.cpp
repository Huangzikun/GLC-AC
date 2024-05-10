#include<iostream>
#include<vector>

using namespace std;

using ll = long long;

const ll dgt[4] = {1, 2, 2, 4};

const ll ist[5] = {0, 1, 2, 2, 4};

int t;

ll k;

void init() {
    cin >> t;
}

ll dfs(ll k) {
    if (k <= 4) return ist[k];
    {
        ll w = (k + 3) / 4, t = (k + 3) - w * 4;
        return dgt[t] * dfs(w);
    }
}

void solve() {
    for (int i = 0; i < t; i++) {
        cin >> k;
        ll res = dfs(k);
        cout << res << endl;
    }
}

signed main(void) {
    init();
    solve();
    return 0;
}