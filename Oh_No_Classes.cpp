#include <bits/stdc++.h>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    vector<pair<int, int>> v = {{a1, b1}, {a2, b2}, {a3, b3}};
    sort(v.begin(), v.end());
    int start = v[0].first;
    int end = v[0].second;
    int ans = 0;
    for (int i = 1; i < 3; i++)
    {
        if (v[i].first <= end)
        {
            end = max(end, v[i].second);
        }
        else
        {
            ans += end - start + 1;
            start = v[i].first;
            end = v[i].second;
        }
    }
    ans += end - start + 1;
    cout << ans << endl;
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