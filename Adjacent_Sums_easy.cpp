#include <bits/stdc++.h>
using namespace std;
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
const int MOD = 1e9 + 7; 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second

int main() {
    fast_io();
    int N, M;
    cin >> N >> M;
    vector<int> A(N + 1), B(N);
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i < N; i++) cin >> B[i];
    int ans = INT_MAX;
    for (int start = 0; start <= 1; start++) {
        vector<int> x(N + 1);
        x[1] = start;
        for (int i = 1; i < N; i++)
            x[i + 1] = x[i] ^ B[i];
        int cost = 0;
        for (int i = 1; i <= N; i++)
            if ((A[i] & 1) != x[i]) cost++;
        ans = min(ans, cost);
    }
    cout << ans << '\n';
    return 0;
}