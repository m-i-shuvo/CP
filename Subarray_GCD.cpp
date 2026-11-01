#include <bits/stdc++.h>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int N;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    int g = 0, ans = -1;
    for (int i = N - 1; i >= 0; i--)
    {
        g = __gcd(g, v[i]);
        if (g == 1)
            ans = max(ans, N - i);
    }
    cout << ans << endl;
}
int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)solve();
    return 0;
}