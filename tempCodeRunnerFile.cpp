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
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    ll n,ans=0;
    cin>>n;
    map<ll,ll> mp;
    ll a[n];
    rep(i,n) 
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll s=mp.size();
    ll xx=pow(2,s-1) -1;
    ans+=n;
    ll x=pow(2,s)-1-s;
    ans+=x;
    for(auto it:mp)
    {
        if(it.second>1) 
        {
            ll f= it.second-1;
            ans+=xx*f;
        }
    }
    cout<<ans<<endl;
}


int32_t main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}