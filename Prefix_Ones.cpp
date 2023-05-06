#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define pp pop_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
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

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<ll,ll> mp;
typedef unordered_map<ll,ll> ump;
typedef set<ll> seti;
typedef multiset<ll> mset;
typedef multiset<pii> mpi;

//Functions

void solution()
{
    ll n,n1=0;
    cin>>n;
    string s;
    cin>>s;
    ll i,mx=0,sum=0;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]=='1') n1++;
        else break;
    }
    for(int x=i;x<=n-1;x++)
    {
        sum=0;
        while(s[x]=='1')
        {
            sum++;
            x++;
        }
        mx=max(mx,sum);
    }
    cout<<n1+mx<<endl;
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