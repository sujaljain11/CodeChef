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

ll nb,nc,ns,p,pc,ps,fb,fc,fs;
ll cb=0,cc=0,cs=0;

ll price(ll x)
{
    fb=max((ll)0,cb*x-nb);
    fc=max((ll)0,cc*x-nc);
    fs=max((ll)0,cs*x-ns);
    ll q=fb*p+fc*pc+fs*ps;
    return(q);
}

void solution()
{
    string s;
    ll r;
    cin>>s;
    cin>>nb>>ns>>nc;
    cin>>p>>ps>>pc;
    cin>>r;
    rep(i,s.length())
    {
        if(s[i]=='B') cb++;
        if(s[i]=='C') cc++;
        if(s[i]=='S') cs++; 
    }
    ll low=0,high=1e14,mid=0,ans=0;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        ll y=price(mid);
        if(y==r)
        {
            cout<<mid<<endl;
            return;
        }
        if(y>r) high=mid-1;
        else 
        {
            low=mid+1;
            ans=mid;
        }
    }
    cout<<ans<<endl;
    return;
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