#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

using ll = long long;

int t, n;

vector<int> A, B, C, D;

void init() {
    cin >> t;
}

void solve() {
    for (int i = 0; i < t; i++) {
        getchar();
        cin >> n;
        unordered_map<ll, ll> cnt;
        for (int i = 0; i < n; i++) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            A.push_back(a), B.push_back(b), C.push_back(c), D.push_back(d);
        }
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < B.size(); j++) {
                ll t1 = A[i] + B[j];
                cnt[t1]++;
            }
        }
        ll res = 0;
        for (int i = 0; i < C.size(); i++) {
            for (int j = 0; j < D.size(); j++) {
                ll t2 = C[i] + D[j];
                res += cnt[-t2];
            }
        }
        cout << res << endl;
        if (i < t - 1) cout << endl;
        A.clear(), B.clear(), C.clear(), D.clear();
    }
}

signed main(void) {
    init();
    solve();
    return 0;
}