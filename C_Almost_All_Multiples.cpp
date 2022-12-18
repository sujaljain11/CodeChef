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
    ll n,x;
    cin>>n>>x;
    if(n%x!=0) 
    {
        cout<<-1<<endl;
        return;
    }
    if(n/x>x)
    {
        vi v(n);
        v[0]=x;
        v[n-1]=1;
        v[x-1]=n/x;
        v[n/x-1]=n;
        rep1(i,x-2) v[i]=i+1;
        for(ll i=x;i<n-1;i++)
        {
            v[i]=i+1;
        }
    }
    if(n==x) 
    {
        cout<<n<<" ";
        for(ll i=2;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<1<<endl;
        return;
    }
    vi v(n);
    v[0]=x;
    v[n-1]=1;
    v[x-1]=n;
    rep1(i,x-1) v[i]=i+1;
    for(ll i=x;i<n-1;i++)
    {
        v[i]=i+1;
    }
    it(i,v) cout<<i<<" ";
    cout<<endl;
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