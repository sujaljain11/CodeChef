#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ee 1000000001
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
    ll n,m,k,ans=0;
    cin>>n>>m>>k;
    map<int,map<int,int>> a;
    ll xx[]={1,0,-1,0};
    ll yy[]={0,1,0,-1};
    rep(i,k)
    {
        ll x,y;
        cin>>x>>y;
        rep(i,4)
        {
            ll nx=x+xx[i];
            ll ny=y+yy[i];
            ans+=a[nx][ny]? -1:1;
        }
        a[x][y]=1;
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