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
void solve() {
    int n;
    cin >> n;
    int cnt=0;
for(int i=0;i<n;i++){
    int x;
    cin >> x;
    if(x==1) cnt++;
}    
if(n%2!=0) cout << "NO\n";
else if((cnt%2) == (n/2)%2) cout << "YES\n";
else cout << "NO\n";
}
int main() {
    fast_io();
int t;
cin >> t;
while(t--){
    solve();
}    
    return 0;
}