#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)
#define pii pair<int,int>
#define vi vector<int>

using namespace std;

void burrah(ll a[])
{
    a[0]=1;
    rep(i,100000)
    {
        a[i]=(2*a[i-1])%1000000007;
    }
}

int32_t main()
{
    fast
    int t;
    cin>>t;
    ll a[100000];
    burrah(a);
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n-1]<<endl;
    }
    return 0;
}