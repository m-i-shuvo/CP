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
    vector<int> mx(M + 1, -1);
    for (int i = 0; i < N; i++) {
        int C, S;
        cin >> C >> S;
        mx[C] = max(mx[C], S);
    }
    for (int i = 1; i <= M; i++) {
        cout << mx[i];
        if (i != M) cout << " ";
    }
    cout << '\n';
    return 0;
}