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
    ll n,m,k,h=0,p=0;
    cin>>n>>m>>k;
    ll a[n];
    rep(i,n) 
    {
        cin>>a[i];
        if(a[i]==k) p++;
    }
    sort(a,a+n);
    if(m<k) 
    {
        cout<<"NO"<<endl;
        return;
    }
    map<ll,ll> mp;
    rep(i,k)
    {
        mp[i]=0;
    }
    for(ll i=0;a[i]<k;i++)
    {
        mp[a[i]]++;
        h++;
    }
    it(i,mp)
    {
        if(i->second!=0) continue;
        else 
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    if(k>=m) 
    {
        cout<<"YES"<<endl;
        return;
    }
    else 
    {
        ll g=(n-(h+p));
        if(g>=(m-h)) 
        {
            cout<<"YES"<<endl;
            return;
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
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