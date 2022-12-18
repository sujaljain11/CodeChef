#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i:f)

#define vlli(v,n) vector<ll> v(n); rep(i,n) cin>>v[i];

const ll sz=1e6+1;
const ll mod=1e9+7;

using namespace std;

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mp;
typedef unordered_map<long long int,long long int> ump;
typedef set<long long int> seti;
typedef multiset<long long int> mset;

void solution()
{
    ll a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    vi x(4),y(4),z(4),v(4);
    x[0]=a;x[1]=b;x[2]=c;x[3]=d;
    y[0]=b;y[1]=a;y[2]=d;y[3]=c;
    z[0]=c;z[1]=d;z[2]=a;z[3]=b;
    v[0]=d;v[1]=c;v[2]=b;v[3]=a;
    if(x[0]<x[1] && x[0]<x[2] && x[0]<x[3] && x[3]>x[2] && x[3]>x[1])
    {
        cout<<"YES"<<endl;
        return;
    }
    if(y[0]<y[1] && y[0]<y[2] && y[0]<y[3] && y[3]>y[2] && y[3]>y[1])
    {
        cout<<"YES"<<endl;
        return;
    }
    if(z[0]<z[1] && z[0]<z[2] && z[0]<z[3] && z[3]>z[2] && z[3]>z[1])
    {
        cout<<"YES"<<endl;
        return;
    }
    if(v[0]<v[1] && v[0]<v[2] && v[0]<v[3] && v[3]>v[2] && v[3]>v[1])
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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