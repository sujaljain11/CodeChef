#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>
using namespace std;





void solution()
{
    ll n,k,cnt=0;
    cin>>n>>k;
    ll a[n];
    rep(i,n)
    cin>>a[i];
    ll gg = a[0];
    rep(i,n)
    gg = __gcd(gg,a[i]);
    ll f=0;
    rep(i,n)
    {
        f=__gcd(f,a[i]);
        if(f==gg)
        {
            cnt++;
            f=0;
        }
    }
    if(cnt>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}