#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;

using vi = vector<int>;
using vll = vector<ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
const double PI = acos(-1.0);

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

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

void solve(){

}

int main(){
    fast_io();

    int t = 1;

    while(t--){
        solve();
    }

    return 0;
}
