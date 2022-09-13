#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for (ll i = n - 1; i >= 0; i--)
#define lp(i, a, b) for (ll i = a; i < b; i++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define rep1(i, n) for (ll i = 1; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x, y) fixed << setprecision(y) << x
#define it(i, f) for (auto i = f.begin(); i != f.end(); i++)
#define pii pair<int, int>
#define vi vector<int>
using namespace std;

void solution()
{
    ll n, cnt=0,ans = 0,ms=0;
    cin >> n;
    ms=n-1;
    ll a[n], b[n], c[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i,n)
    {
        rep(j,n)
        {
            if(i==j) continue;
            if(a[i]<a[j] && b[i]<b[j]) break;
            else cnt++;
        }
        if(cnt==ms) 
        {
            ans++;
            cnt=0;
        }
        else cnt=0;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fast ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}