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
#define arr(n); ll ar[n]; for(int i=0;i<n;i++) cin>>ar[i];

using namespace std;

void solution()
{
    int n,m;
    cin>>n>>m;
    arr(n);
    bitset<32> bs;
    bool f=false;
    for(int i=0; i<(1<<n);i++)
    {
        ll ans=0;
        bs=i;
        for(int j=0;j<n;j++)
        {
            if(bs[j]) ans+=ar[j];
        }
        if(ans==m) 
        {
            cout<<"Yes"<<endl;
            f=true;
            return;
        }
    }
    if(f==false) 
    {
        cout<<"No"<<endl;
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