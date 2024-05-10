#include<iostream>
#include<cstring>

using namespace std;

const int MAX_RANK = 3, MOD = 10000;

using ll = long long;

struct Maxtrix {
    ll a[MAX_RANK][MAX_RANK];

    Maxtrix() {
        memset(a, 0, sizeof a);
    }

    void init() {
        a[1][1] = a[1][2] = a[2][1] = 1;
        a[2][2] = 0;
    }

    Maxtrix operator * (const Maxtrix b) {
        Maxtrix res;
        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= 2; j++) {
                for (int u = 1; u <= 2; u++) {
                    res.a[i][j] = (res.a[i][j] + (a[i][u] * b.a[u][j]) % MOD) % MOD;
                }
            }
        }
        return res;
    }
};

ll q_pow(ll n) {
    Maxtrix ans, base;
    ans.init(), base.init();
    while (n > 0) {
        if (n & 1) ans = ans * base;
        base = base * base;
        n >>= 1;
    }
    return ans.a[1][1];
}

ll t, n;

void init() {
    cin >> t;
}

void solve() {
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 1 || n == 2) cout << "1" << endl;
        else cout << q_pow(n - 2) << endl;
    }
}

signed main(void) {
    init();
    solve();
    return 0;
}