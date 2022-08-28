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
    int n;int ans=-1;
    cin>>n;
    vector<int> v(n);
    rep(i,n) cin>>v[i];
    map<int,int> mp;
    rep(i,n) 
    {
        mp[v[i]]++;
    }
    it(it,mp)
    {
        ans=max(ans,it->first+it->second-1);
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