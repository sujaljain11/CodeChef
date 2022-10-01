#include <bits/stdc++.h>

#define pi (3.141592653589)
#define pb push_back
#define ll long long int
#define rrep(i, n) for(ll i=n-1;i>=0;i--)
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define it(i,f) for(auto i=f.begin(); i!=f.end(); i++)

using namespace std;

typedef pair<long long int, long long int> pii;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mpii;
typedef set<long long int> seti;
typedef multiset<long long int> mseti;

void solution()
{
    ll n,q;
    mseti ms;
    cin>>n>>q;
    ll a[n];
    rep(i,n) cin>>a[i];
    rep1(i,n)
    {
        ll d=a[i]-a[i-1];
        if(d<0) ms.insert(d);
    }

    if(q<=5)
    {
        rep(j,q)
        {
            ll x,y;
            cin>>x>>y;
            x--;
            a[x]=y;
            ll m = 0;
            rep1(i,n)
            m=min(m,a[i]-a[i-1]);
            cout<<-(m)<<endl;
        }
    }
    else 
    {
        rep(i,q)
        {
            ll x,y;
            cin>>x>>y;
            x--;
            ll temp=a[x];
            a[x]=y;
            if(x!=0)
            {
                if(temp-a[x-1]<0) ms.erase(ms.find(temp-a[x-1]));
                if(a[x]-a[x-1]<0) ms.insert(a[x]-a[x-1]);
            }
            if(x!=n-1)
            {
                if(a[x+1]-temp<0) ms.erase(ms.find(a[x+1]-temp));
                if(a[x+1]-a[x]<0) ms.insert(a[x+1]-a[x]);
            }
            if(ms.empty()) 
            cout<<0<<endl;
            else 
            cout<<-(*(ms.begin()))<<endl;
        }
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