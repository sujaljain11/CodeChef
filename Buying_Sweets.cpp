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

bool sc(pair<int,int>& a,pair<int,int>& b)
{
    if((a.first-a.second)!=(b.first-b.second))
    return (a.first-a.second)<(b.first-b.second);
    else 
    return a.first<b.first;
}
void solution()
{
    int n,r;
    cin>>n>>r;
    vector<int> a(n),b(n);
    rep(i,n)
    cin>>a[i];
    rep(i,n)
    cin>>b[i];
    vector<pair<int,int>> v;
    rep(i,n)
    {
        pair<int,int> pr;
        pr.first=a[i];
        pr.second=b[i];
        v.push_back(pr);
    }
    sort(v.begin(),v.end(),sc);
    int cnt=0;
    int j=0;
    while(j<n)
    {
        if(r>=v[j].first)
        {
            int x=v[j].first-v[j].second;
            int z=(r-v[j].first)/x;
            z++;
            r-=z*x;
            cnt+=z;
        }
        else 
        j++;
    }
    cout<<cnt<<endl;
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