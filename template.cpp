#include <bits/stdc++.h>
using namespace std;

// ---------- Fast I/O ----------
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

// ---------- Typedefs ----------
using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;

using vi = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;

// ---------- Constants ----------
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);

// ---------- Macros ----------
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

// ---------- Debug ----------
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

// ---------- Functions ----------
ll gcd(ll a, ll b){
    while(b){
        a %= b;
        swap(a,b);
    }
    return a;
}

ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

ll binpow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

ll modpow(ll a, ll b, ll mod = MOD){
    ll res = 1;
    a %= mod;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// ---------- Solve ----------
void solve(){

}

// ---------- Main ----------
int main(){
    fast_io();

    int t = 1;
    // cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
