#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void solution()
{
    ll n,l,r;
    ll ans=1;
    cin>>n>>l>>r;
    n=n+1;
    ll a[n];
    rep(k,n)
    {
        int p=pow(10,9)+7;
        a[k]=ans%(p);
        ans=ans*(n-1-k)/(k+1);
    }
    ll aa[2*n-1];
    for(ll i=1;i<2*n-1;i+=2)
    {
        if(i%2!=0) aa[i]=0;
    }
    ll h=0; 
    for(ll i=0;i<2*n-1 ;i+=2)
    {
        aa[i]=a[h];
        h++;
    }
   
    for(ll i=n+l-1; i<=n+r-1;i++)
    cout<<aa[i]<<" ";
    cout<<endl;
}


int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}