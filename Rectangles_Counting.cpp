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

void solution(ll n)
{
   ll ans=0;
   vector<pair<ll,ll>> v;
   map<pair<ll,ll>, ll> mp;
   rep(i,n) 
   {    
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
   }
   sort(v.begin(), v.end());
   for(ll i=0;i<n-1;i++)
   if(v[i].first==v[i+1].first)
   mp[{v[i].second,v[i+1].second}]++;
   map<pair<ll,ll>,ll>::iterator it;
   for(it=mp.begin();it!=mp.end();it++)
   {
        ll cn=it->second;
        ans+=cn*(cn-1)/2;
   }
   cout<<ans<<endl;
}


int32_t main()
{
    fast
    ll t;
    while(true){
    cin>>t;
    if (t==0)
    break;
    solution(t);
    }
    return 0;
}