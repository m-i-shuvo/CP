#include <bits/stdc++.h>
using namespace std;
void fast_io()
{
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
bool oddPowerOfTwo(ll n)
{
    if (n == 0)
        return false;
    int cnt = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }
    if (n != 1)
        return false;
    return (cnt % 2 == 1);
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 1 || oddPowerOfTwo(n))
        cout << "Bob\n";
    else
        cout << "Alice\n";
}
int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}