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
    
}


int32_t main()
{
    fast
    ll n,k=0,l=0;
    cin>>n;
    if(n%7==0) 
    {
        rep(i,n/7) cout<<7;
        cout<<endl;
        return 0;
    }
    if(n%4==0) 
    {
        ll x=n/4;
        while(x>7)
        {
            x-=7;
            l++;
        }
        rep(i,x) cout<<4;
        rep(i,4*l) cout<<7;
        cout<<endl;
        return 0;
    }
    while(n%4!=0) 
    {
        n-=7;
        k++;
        if(n<4) 
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    ll x=n/4;
    while(x>7)
    {
        x-=7;
        l++;
    }
    rep(i,x) cout<<4;
    rep(i,4*l+k) cout<<7;
    cout<<endl;
    return 0;
}