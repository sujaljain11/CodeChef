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
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll c=0,x=0,y=0;
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,n) 
    {
        cin>>b[i];
    }
    rep(i,n)
    {
        c+=(a[i]-b[i]);
        if((a[i]-b[i])>=0) x+=(a[i]-b[i]);
        else y+=(a[i]-b[i]);
    }
    if(c!=0) 
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<x<<endl;
        return;
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