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
    ll n,ans=0;
    cin>>n;
    vi v(n);
    cin>>v[0];
    rep1(i,n) 
    {
        cin>>v[i];
        bool f1=false,f2=false;
        if(v[i]>v[i-1])
        {
            for(ll j=0;j<=i-1;j++)
            {
                if(v[i]>v[j]) continue;
                else
                {
                    f1=true;
                    break;
                }
            }
        }
        else
        {
            for(ll j=0;j<=i-1;j++)
            {
                if(v[i]<v[j]) continue;
                else
                {
                    f2=true;
                    break;
                }
            }
        }
        if(f1==false && f2==false) ans++;
    }
    cout<<ans<<endl;
}


int32_t main()
{
    fast
    int t;
    t=1;
    while(t--)
    {
        solution();
    }
    return 0;
}