#include<iostream>
#include<vector>

using namespace std;

const int N = 1010;

int n;

vector<int> v[N];

void init() {
    cin >> n;
    v[1].push_back(1);
    v[2].push_back(1), v[2].push_back(1);
}

void solve() {
    for (int i = 3; i <= n; i++) {
        v[i].push_back(1);
        for (int j = 1; j <= i - 2; j++) {
            v[i].push_back(v[i - 1][j - 1] + v[i - 1][j]);
        }
        v[i].push_back(1);
    }

    for (int i = 1; i <= n; i++) {
        int odd_cnt = 0;
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] & 1) odd_cnt++;
        }
        cout << odd_cnt << " ";
        if (i % 4 == 0) cout << endl;
    }
}

signed main(void) {
    init();
    solve();
    return 0;
}