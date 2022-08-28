#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>


using namespace std;

void solution()
{
    ll n,q,m;
    cin>>n>>q;
    ll p=0;
    ll ar[n+1];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        p=(p^ar[i]);
    }
    ar[n]=p;
    ll s[n+1];
    s[0]=ar[0];
    for(ll i=1;i<n+1;i++)
    {
        s[i]=(s[i-1]^ar[i]);
    }
    rep(i,q) 
    {
        cin>>m;
        ll l=m%(n+1);
        cout<<s[l-1]<<endl;
    }
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