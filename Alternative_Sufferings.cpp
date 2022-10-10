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
    ll n,k,j;
    cin>>n>>k;
    ll left[n],right[n];
    string s;
    cin>>s;
    rep(i,n) left[i]=right[i]=1e10;
    j=-1;
    rep(i,n)
    {
        if(s[i]=='1') j=i;
        else 
        {
            if(j!=-1)
            {
                left[i]=i-j;
            }
        }
    }
    j=-1;
    rrep(i,n)
    {
        if(s[i]=='1') j=i;
        else 
        {
            if(j!=-1) 
            {
                right[i]=j-i;
            }
        }
    }
    j=-1;
    rep(i,n)
    {
        if(s[i]=='0') j=i;
        else 
        {
            if(j!=-1)
            {
                left[i]=i-j;
            }
        }
    }
    j=-1;
    rrep(i,n)
    {
        if(s[i]=='0') j=i;
        else 
        {
            if(j!=-1) 
            {
                right[i]=j-i;
            }
        }
    }
    rep(i,n)
    {
        if(s[i]=='0') 
        {
            j=min(left[i],right[i]);
            if(j<=k) 
            {
                ll x=k-j+1;
                if(x%2==1) s[i]='1';
            }
        }
        else
        {
            s[i]='0';
            j=min(left[i],right[i]);
            if(j<=k-1)
            {
                ll x=k-1-j+1;
                if(x%2==1) s[i]='1';
            }
        }
    }
    rep(i,n) cout<<s[i];
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