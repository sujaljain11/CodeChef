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

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mp;
typedef unordered_map<long long int,long long int> ump;
typedef set<long long int> seti;
typedef multiset<long long int> mset;
typedef multiset<pii> mpi;

//Functions

ll maxsub(vi &v)
{
    ll sum=INT_MIN,cn=INT_MIN;
    for(auto it:v)
    {
        cn=max(it,it+cn);
        sum=max(sum,cn);
    }
    return sum;
}
void solution()
{
    ll n,k,sum=0;
    cin>>n>>k;
    vi v(n),res;
    rep(i,n) 
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(k==1) 
    {
        cout<<maxsub(v)<<endl;
        return;
    }
    rep(i,2) res.insert(res.end(),v.begin(),v.end());
    if(sum<=0) cout<<maxsub(res)<<endl;
    else cout<<maxsub(res) + (k-2)*sum<<endl;
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