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
#define rep1(i,n) for(ll i=2;i<n;i++)
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

vi v(100);
void prime()
{
    ll k=1,i=2;
    v[0]=1;
    while(k<=99)
    {
        ll cn=0;
        ll x=i;
        i++;
        lp(j,2,x+1) 
        {
            if(x%j==0) cn++;
        }
        if(cn==1) 
        {
            v[k]=x;
            k++;
        }
    }
}
void solution()
{
    // vi v;
    // v.pb(1);
    // rep1(i,100) 
    // {
    //     ll cn=0;
    //     ll x=i;
    //     lp(j,2,x+1) 
    //     {
    //         if(x%j==0) cn++;
    //     }
    //     if(cn==1) v.pb(i);
    // }
    ll n,m;
    cin>>n>>m;
    auto a=find(v.begin(),v.end(),n);
    if(m==v[a-v.begin()+1]) py;
    else pn;
}


int32_t main()
{
    fast
    int t;
    vi v;
    t=1;
    prime();
    while(t--)
    {
        solution();
    }
    return 0;
}