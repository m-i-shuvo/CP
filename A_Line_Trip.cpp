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

ll n,x;
cin >> n >> x;
vll v;
v.pb(0);
for(int i=0;i<n;i++){
ll point;
cin >> point;
v.pb(point);
}
v.pb(x);
int m=v.size();
ll max_dis=INT_MIN;
for(int i=1;i<m;i++){
    if(i==m-1) 
        max_dis=max(max_dis,2*(v[i]-v[i-1]));
        
else    max_dis=max(max_dis,v[i]-v[i-1]);

}
cout << max_dis << endl;
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