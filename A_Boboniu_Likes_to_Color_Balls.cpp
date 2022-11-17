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
    ll r,g,b,w;
    cin>>r>>g>>b>>w;
    vi v(4);
    v[0]=r;v[1]=g;v[2]=b;v[3]=w;
    ll a=0,bb=0;
    rep(i,4) if(v[i]%2==0) a++;
    
    if(a==3 || a==4) py;
    else 
    {
        if(r==0 || g==0 || b==0) 
        {
            pn; 
            return;
        }
        rep(i,3) v[i]--;
        v[3]+=3;
        rep(i,4) if(v[i]%2==0) bb++;
        if(bb==3 || bb==4) py;
        else pn;
    }
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