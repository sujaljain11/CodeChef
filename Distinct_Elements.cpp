#include <bits/stdc++.h>

#define pi (3.141592653589)
#define ll long long int
#define pb push_back
#define pb push_back
#define mt make_tuple
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)

using namespace std;

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mpii;
typedef set<long long int> seti;
typedef multiset<long long int> mseti;
typedef tuple<long long int,long long int,long long int> State;

void solution()
{
    ll n,ans=1;
    cin>>n;
    ll a[n];
    mpii mp;
    rep(i,n)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp)
    {
        ans=(ans%1000000007)*(it.second+1)%1000000007;
    }
    cout<<(ans-1)%1000000007<<endl;
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