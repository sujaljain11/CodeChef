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
    string a,b,c;
    ll d,e;
    map<string,pair<ll,ll>> mp;
    rep(i,12)
    {
        cin>>a>>d>>b>>e>>c;
        if(d>e) 
        mp[a].first+=3;
        if(d<e) 
        mp[c].first+=3;
        else 
        {
            mp[c].first++;
            mp[a].first++;
        }
        mp[a].second+=d-e;
        mp[c].second+=e-d;
    }
    vector<pair<pair<ll,ll>,string>> vc;
    for(auto x:mp)
    {
        pair<pair<ll,ll>,string> tc;
        tc.first.first=x.second.first;
        tc.first.second=x.second.second;
        tc.second=x.first;
        vc.push_back(tc);
    }
    sort(vc.begin(),vc.end());
    cout<<vc[3].second<<" "<<vc[2].second<<endl;
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