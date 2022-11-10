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
    ll m,n;
    bool flag1;
    cin>>m>>n;
    vvi v(m,vi(n)),u(m,vi(n,1));
    rep(i,m) rep(j,n) cin>>v[i][j];
    rep(i,m) rep(j,n) 
    {
        if(v[i][j]==0) 
        {
            rep(p,n) u[i][p]=0;
            rep(p,m) u[p][j]=0;
        }
    }

    rep(i,m) 
    {
        rep(j,n) 
        {
            flag1=true;
            if(v[i][j]==1) 
            {
                flag1=false;
                rep(p,n) 
                {
                    if(u[i][p]==1) 
                    {
                        flag1=true;
                        break;
                    }
                }
                if(flag1==true) break;
                else rep(p,m) 
                {
                    if(u[p][j]==1) 
                    {
                        flag1=true;
                        break;
                    }
                }
            }
            if(flag1==false) 
            {
                pn;
                return 0;
            }
        }
    }
    py;
    rep(i,m)
    {
        rep(j,n)
        {
            cout<<u[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}